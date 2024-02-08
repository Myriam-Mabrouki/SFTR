node EDGE2
  (x: bool)
returns
  (y: bool);

let
  y = (false -> (if (false -> (pre x)) then (if x then false else true) else 
  (if x then true else false)));
tel

