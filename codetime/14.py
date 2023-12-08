from cmath import *

y=float(input())
if y<0:
    z=y*y-0.3
elif y>=0 and y<=1:
    z=exp(y+4)-sin(y+4)
else:
    z=1/tan(y*y+y)
print(z)