h, w=input().split()
h = int(h)
w = int(w)
n=int(input())
A=[]
for i in range(h+1):
    A.append([])  #리스트 안에 다른 리스트 추가해 넣기
    for j in range(w+1):
        A[i].append(0) 
        
for i in range(n):
    l, d, x, y=input().split()
    if int(d) == 1:
        for j in range(int(l)):
            A[int(x)+j][int(y)]=1
    else:
        for k in range(int(l)):
            A[int(x)][int(y)+k]=1

for i in range(1,h+1):
    for j in range(1, w+1):
        print(A[i][j], end=' ') #공백을 두고 한줄로 출력
    print() # 줄바꿈