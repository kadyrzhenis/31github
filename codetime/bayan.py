a,b,c,d=map(int,input().split())

if a<=b and b<=c and c<=d:
    a=d
    b=d
    c=d
elif a>b and b>c and c>d:
    a=a
    b=b
    c=c
    d=d
else:
    a=a*a
    b=b*b
    c=c*c
    d=d*d
print('a =',a,' b =',b,' c =',c,' d =',d)