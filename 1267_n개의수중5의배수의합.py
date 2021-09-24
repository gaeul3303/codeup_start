n=int(input())
a=input().split() 

for i in range(n):
    a[i]= int(a[i])

s=0
for i in range(n):
    if a[i]%5==0:
        s=s+a[i]
print(s)