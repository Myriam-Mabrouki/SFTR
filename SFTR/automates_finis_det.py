#==========================================================#
# UE M1 SAR SFTR                                           #
# TME Automates finis : operations sur les automates finis #
# Mathieu.Jaume@lip6.fr                                    #
#==========================================================#

from automates_finis import *

# Liste des transitions de T dont l'origine est l'etat s
# ------------------------------------------------------

def lt_from_s(eqS,s,T):
    # eqS : fonction d'egalite sur les etats
    # s : etat
    # T : liste de transitions
    return [(s1,l,s2) for (s1,l,s2) in T if eqS(s1,s)]

# Liste des labels presents sur les transitions issues d'un etat s
# ----------------------------------------------------------------

def label_from(eqS,s,T):
    # eqS : fonction d'egalite sur les etats
    # s : etat
    # T : liste de transitions
    R = []
    for (si,l,sf) in T:
        if eqS(si,s) and l != None:
            R = ajout(eq_atom,l,R)
    return R

# Liste des labels presents sur les transitions issues d'un ensemble d'etats
# --------------------------------------------------------------------------

def label_from_set(eqS,S,T):
    # eqS : fonction d'egalite sur les etats
    # S : liste d'etats
    # T : liste de transitions
    R = []
    for s in S:
        R = union(eq_atom,label_from(eqS,s,T),R)
    return R

# Automates finis deterministes
#------------------------------

# determine si la relation de transition a partir d'un etat s est
# fonctionnelle et ne contient aucune epsilon-transition
# ---------------------------------------------------------------

def lt_from_s_deterministic(T):
    # T : liste de transitions
    def _aux(L):
        if len(L)==0:
            return True
        else:
            if L[0] == None or L[0] in L[1:]:
                return False
            else:
                return _aux(L[1:])
    return _aux([l for (_,l,_) in T])


# determine si un automate est deterministe
# -----------------------------------------

def is_deterministic(A):
    # A : automate fini
    # A COMPLETER
    (S, T, I, F, eqS) = A
    print(len(I))
    if len(I) != 1:
        return False
    for s in S:
        t = lt_from_s(eqS,s,T)
        if not lt_from_s_deterministic(t):
            return False
    return True

# Determinisation
#----------------

# Egalite entre transitions d'un automate
# ---------------------------------------

def eq_trans(eqS,t1,t2):
    (si1,l1,sf1) = t1
    (si2,l2,sf2) = t2
    return l1==l2 and eqS(si1,si2) and eqS(sf1,sf2)

def make_eq_trans(eqS):
    def _eq_trans(t1,t2):
        return eq_trans(eqS,t1,t2)
    return _eq_trans

# Determinisation d'un automate fini avec epsilon-transitions
# -----------------------------------------------------------

def make_det(A):
    # A : automate fini
    # A COMPLETER

    #Si l'automate est déjà déterminisite, il n'y a rien à faire
    if is_deterministic(A):
        return A

    #On récupère les états et les transitions de A + On crée de nouveaux ensembles pour notre automate déterministe
    (S, T, I, F, eqS) = A
    
    new_T = set()
    new_F = set()
    new_I =  eps_cl_set(eqS, I, T)
    Q = {new_I}

    #On crée un dictionnaire d'epsilon-clôture

    dico_cl = dict()
    for s in S:
        dico_cl[s] = eps_cl(eqS, s, T)


    while ???: #nb états créés != nb états explorés?
        #cur_state

        #On calcule l'epsilon-clôture de l'état courant
        tmp_state = eps_cl(eqS, cur_state, T)

        #On regarde quels sont les symboles par lesquels sont étiquettées les transitions partant des états de l'état courant
        symboles = label_from_set(eqS, cur_state, T)

        for a in symboles:
            #Pour un symbole a, on crée un nouvel état destination de la transition état courant ->(a)
            new_state = set()

            for s in tmp_state:
                s = dico[s]
                tmp_trans = lt_from_s(eqS, s, T)
                for (q1, b, q2) in tmp_state:
                    if a == b:
                        new_state = ajout(eqS, q2, new_state)
            



    return (Q, new_T, new_I, new_F, eqS)


ex_BA = (["2D","2A","G","1"],\
        [("2D","R","1"),("2D","D","G"),("2D", "A", "2A"), ("2A", "A", "G"), ("2A", "A", "2D"), ("2A", "R", "1"), ("2A", "D", "2A"), ("1", "R", "2D"), ("1", "R", "2A"), ("1", "R", "G"), ("1", "D", "1"), ("1", "A", "1") ],\
        ["2D","2A","1"],["G"], eq_atom)