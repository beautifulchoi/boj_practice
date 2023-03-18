#피보나치 수

#f(n)=f(n-1)+f(n-2)
# 0 1 1 2 3 5 8 13 .... 
import sys
input=sys.stdin.readline

def F(n):
    if n==0:
        return 0
    elif n<=1:
        return 1
    else:
        return F(n-1)+F(n-2)

n=int(input())
print(F(n))