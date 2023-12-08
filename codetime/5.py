a,b=map(int,input().split())
ss=[]
l=[]
r=0
while a>0:
    s=str(input())
    while b>0:
        num=int(input())
        r=r+num
        b=b-1
    ss.append(s)
    l.append(r)
    a=a-1
print(ss,l)

