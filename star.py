n = int(input("enter the row number: "))

for i in range(1, n+1):
    print((n-i)*" ", i*"*", (i-1)*"*", (n-i)*" ", sep="")

for i in range(1, n+1):
    print(i*" ", (n-i)*"*", (n-1-i)*"*", i*" ", sep="")
