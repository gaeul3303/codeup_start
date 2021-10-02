n=int(input())
a=input().split()

for i in range(n):
    a[i]=int(a[i])

for i in range(n-1):
    if a[i] < a[i+1]:
        a[i+1]=a[i]
    else:
        a[i+1]=a[i+1]
    
print(a[n-1])
    
#min = a[0]
#for i in range(0, n) :
  #if a[i] < min :
    #min = a[i]

#print(min)