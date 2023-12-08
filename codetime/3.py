x=str(input())
s=str(input())
l=1+x.count(' ')
k=1+s.count(' ')
sr=s.split()
kl=l%k
if kl!=0:   
    print(sr[kl-1])
else:
    print(sr[k-1])