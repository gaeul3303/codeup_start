w, h, b=input().split()
w=int(w)
h=int(h)
b=int(b)
a=w*h*b/8/1024/1024
print(format(a,".2f"), end=' MB')