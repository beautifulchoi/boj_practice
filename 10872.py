#팩토리얼 만들기
import sys
input=sys.stdin.readline
n=int(input())
def fac(n):
    if n==0:
        return 1
    result= n*fac(n-1)
    return result

print(fac(n))




#fac(n)-> n n-1 n-2 n-3 ......   1