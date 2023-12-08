a,b=map(int,input().split())
c=a
d=b
fib0=0
fib1=1
l=0
k=1
fiba=0
while a>1:
    fiba=fib1+fib0
    fib0=fib1
    fib1=fiba
    a=a-1
while b>1:
    fibb=k+l
    l=k
    k=fibb
    b=b-1
while fibb>0:
    fiba,fibb=fibb,fiba%fibb
print(fiba)
