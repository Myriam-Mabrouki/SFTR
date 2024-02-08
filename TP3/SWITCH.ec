node SWITCH
  (orig: bool;
  on: bool;
  off: bool)
returns
  (state: bool);

let
  state = (orig -> (if on then true else (if off then false else (pre state))))
  ;
tel

