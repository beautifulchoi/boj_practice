#다시 풀기 nCm 수열짜기
from itertools import combinations
n,m=map(int, input().split())

all=(list(combinations(range(1,n+1),m)))
for num in all:
    print(*num)

