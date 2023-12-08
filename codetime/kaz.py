lst = []

for i in range(0, 12):
    ele = int(input("150 мен 200 арасындағы кез келген сан енгіз : "))
    lst.append(ele) 
cnt=0 
pst=-1 
max=170
for i in range(0, 12):
    if lst[i]>=max:
        max=lst[i]
        pst=i
if pst==-1:
    print("170 тен асатын студент жок")
else:
    print(pst)

