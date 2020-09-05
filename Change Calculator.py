print("Enter the no of Elements:",end='')
n=int(input())
amounts=[]
denoms={2000:0,500:0,200:0,100:0,50:0,20:0,10:0,5:0,2:0,1:0}

for i in range (0,n):
    print(i+1,". Enter Amount: ",end='')
    amounts.append(int(input()))

for i in amounts:
    balance=i
    for j in denoms:
        if balance!=0:
            num=balance//j
            denoms[j]=denoms[j]+num
            balance=balance%j


print(amounts)
print(denoms)