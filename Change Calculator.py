#CHANGE CALCULATOR calculates the number of currency notes required for your cash transactions
print("CURRENCY CHANGE CALCULATOR\n")
amounts=[]  #stores the amounts entered
denoms={2000:0,500:0,200:0,100:0,50:0,20:0,10:0,5:0,2:0,1:0} #Currently Available Denominations in India.. will be made dynamic later
total=0
print("Enter the no of Elements:",end='')
n=int(input())

for i in range (0,n):
    print(i+1,". Enter Amount: ",end='')
    amt=float(input())
    total=total+amt
    amounts.append(amt)

for i in amounts:
    balance=i
    for j in denoms:
        if balance==0:
            break
        num=balance//j
        denoms[j]=denoms[j]+num
        balance=balance%j

print("\n\nTOTAL AMOUNT: ",total)
print("REQUIRED DENOMINATIONS:")
for den in denoms:
    if denoms[den]!=0:
        print(den,": ",int(denoms[den]))
