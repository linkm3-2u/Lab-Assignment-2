function MT(n);
if terminal (n) then
if open(n) then v := eval(n)
else v := n:f+ or n:f−;
else
if open(n) then generate the children of n;
if max(n) then
v := −∞;
c := rst(n);
while v¡
 and c 6= ⊥ do
if c:f+¿
 then v0 := MT(c; 
) else v0 := c:f+ ;
v := max(v; v0
);
c := next(c);
if min(n) then
v := +∞;
c := rst(n);
while v¿
 and c 6= ⊥ do
if c:f−¡
 then v0 := MT(c; 
) else v0 := c:f− ;
v := min(v; v0
);
c := next(c);
if v¡
 then n:f+ := v else n:f− := v;
return v

function MTD(r; f);
initial step:

 := f;
v := MT(r; 
);
main loop:
if v¡f then
repeat

 := v;
v := MT(r; 
);
until v = 
;
if v¿f then
repeat

 := v + 1;
v := MT(r; 
);
until v = 
 − 1;
return v