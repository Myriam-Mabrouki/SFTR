#==========================================================#
# UE M1 SAR SFTR                                           #
# TME Automates finis : operations sur les automates finis #
# Mathieu.Jaume@lip6.fr                                    #
#==========================================================#

from automates_finis_det import *

# Automate fini reconnaissant l'union de 2 langages reconnaissables
#------------------------------------------------------------------

def finite_aut_union(A1,A2):
    # A1 : automate fini
    # A2 : automate fini
    (S1,T1,I1,F1,eqS1) = A1
    (S2,T2,I2,F2,eqS2) = A2
    def _eqS(p1,p2):
        (q1,n1)=p1
        (q2,n2)=p2
        if n1==n2:
            if n1==1:
                return eqS1(q1,q2)
            else:
                return eqS2(q1,q2)
        else:
            return False
    S = [(q,1) for q in S1] + [(q,2) for q in S2]
    T = [((qi,1),l,(qf,1)) for (qi,l,qf) in T1] + \
        [((qi,2),l,(qf,2)) for (qi,l,qf) in T2]
    I = [(q,1) for q in I1] + [(q,2) for q in I2]
    F = [(q,1) for q in F1] + [(q,2) for q in F2]
    return (S,T,I,F,_eqS)

# L(A_b0) = { 0 }

A_b0 = ([1,2],[(1,0,2)],[1],[2],eq_atom)

# L(A_bp) = { mots binaires non vides commencant par 1 et representant
#             un entier naturel pair }

A_bp = ([3,4,5],[(3,1,4),(4,0,4),(4,1,4),(4,0,5)],[3],[5],eq_atom)



# Automate fini reconnaissant l'intersection de 2 langages reconnaissables
#-------------------------------------------------------------------------

def finite_aut_intersection(A1,A2):
    # A1 : automate fini
    # A2 : automate fini
    # A COMPLETER
    return


# L(A_bp0) = { mots binaires non vides representant
#              un entier naturel pair (sans 0 non significatifs a gauche }

A_bp0 = ([0,1,2,3,4,5],
         [(0,None,1), (0,None,3), (1,0,2), (3,1,4),(4,0,4),(4,1,4),(4,0,5)],
         [0],[2,5],eq_atom)

# L(A_bm) = (101)^*.(0+1)

A_bm = ([0,1,2,3,4],
        [(0,1,1), (0,None,3), (1,0,2), (2,1,3), (3,None,0), (3,0,4), (3,1,4)],
        [0],[4],eq_atom)
    



# Produit synchronise de n automates
#-----------------------------------
##

def succ_prod_sync(n,ts,tA,f):
    # n : entier
    # ts : n-uplet d'etats
    # tA : n-uplet d'automates
    # f : fonction de synchronisation
    # A COMPLETER
    return

def make_trans_succ_prod_sync(n,ts,tA,f):
    # n : entier
    # ts : n-uplet d'etats
    # tA : n-uplet d'automates
    # f : fonction de synchronisation
    # A COMPLETER
    return
    
def make_prod_sync_n(n,tA,f):
    # n : entier
    # tA : n-uplet d'automates
    # f : fonction de synchronisation
    # A COMPLETER
    return

# exemple : producteur consommateur -- tampon de tailles 2 et 3

A_tmp1_ex = ([0,1],[(0,"in1",1), (1,"out1",0)],[0],[0,1],eq_atom)
A_tmp2_ex = ([0,1],[(0,"in2",1), (1,"out2",0)],[0],[0,1],eq_atom)
A_tmp3_ex = ([0,1],[(0,"in3",1), (1,"out3",0)],[0],[0,1],eq_atom)


# Automate fini reconnaissant pref(L) (pour L un langage reconnaissable)
#-----------------------------------------------------------------------

def pref_LA(A):
    # A : automate fini
    (S,T,I,F,eqS) = A
    return (S,T,I,intersection(eqS,reach_A(A),co_reach_A(A)),eqS)


# Automate fini reconnaissant rac(L) (pour L un langage reconnaissable)
#----------------------------------------------------------------------

def finite_aut_rac(A):
    # A : automate fini
    (S,T,I,F,eqS) = A
    def _AIp(p):
        return (S[:],T[:],[p],F[:],eqS)
    def _AFp(p):
        return (S[:],T[:],I[:],[p],eqS)
    p0 = S[0]
    A = finite_aut_intersection(_AIp(p0),_AFp(p0))
    for p in S[1:]:
        A = finite_aut_union(A,finite_aut_intersection(_AIp(p),_AFp(p)))
    return A

# exemple L = (a^4)^*

A_4a = ([0,1,2,3],[(0,"a",1),(1,"a",2),(2,"a",3),(3,"a",0)],
        [0],[0],eq_atom)



# Automate fini reconnaissant l'intersection de n langages reconnaissables
# en utilisant un produit synchronise
#-------------------------------------------------------------------------

def make_intersection_n(n,Alphabet,tA):
    # n : entier
    # Alphabet : alphabet
    # tA : n-uplet d'automates
    # A COMPLETER
    return

