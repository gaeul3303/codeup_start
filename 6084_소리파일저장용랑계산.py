h, b, c, s=input().split()
h=int(h)
b=int(b)
c=int(c)
s=int(s)
a= h*b*c*s/8/1024/1024

print(format(a,".1f"), end=' MB')
