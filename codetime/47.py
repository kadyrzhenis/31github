a,b,c,d=map(int,input().split())
arr=[a,b,c,d]
mult=1
cnt=0
for i in arr:
    if i!=0:
        mult=mult*i
        cnt=cnt+1
if mult!=1 or (mult==1 and cnt!=0):
    print(mult)
else:
    print('a =',a,' b =',b,' c =',c,' d =',d)