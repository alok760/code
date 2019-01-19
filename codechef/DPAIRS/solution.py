n,m = [int(n) for n in input().split()]
A = [int(n) for n in input().split()]
B = [int(n) for n in input().split()]
C = {}
print("n",n)
print("m",m)
for ci,i in enumerate(A):
    for cj,j in enumerate(B):
        if i+j in C:
            C[i+j] = -1
        else:
            C[i+j] = [ci,cj]

print(C[0])
