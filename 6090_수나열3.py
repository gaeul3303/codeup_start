a, m, d, n= input().split()
a=int(a)
m=int(m)
d=int(d)
n=int(n)

s=a
for i in range(2, n+1):
    s= s* m +d

print(s)