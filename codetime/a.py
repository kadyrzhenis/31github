
T=int(input())
for t in range(T):
    n=int(input())
    num=input().replace('0','').replace('2','').replace('4','').replace('6','').replace('8','')
    leng=len(num)
    if (leng % 2 ==1 and leng != 1):
        num=num[:-1]
        print(num)
    elif leng%2==0 and leng!=0:
        print(num)
    else:
        print(-1)
 
    