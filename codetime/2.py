l=[]
s=int(input())
a=str(input())
d=a.count("1")+a.count("3")+a.count("5")+a.count("7")+a.count("9")
if(a[-1]=="2" or a[-1]=="4" or a[-1]=="6" or a[-1]=="8" or a[-1]=="0") and s==1:
    l=l+[-1]
elif (a[-1]=="1" or a[-1]=="3" or a[-1]=="5" or a[-1]=="7" or a[-1]=="9"):
    a=a[0:s-2]+a[s-1:s]
elif(a[-1]=="2" or a[-1]=="4" or a[-1]=="6" or a[-1]=="8" or a[-1]=="0"):
    a=a[-1]
print(a)
