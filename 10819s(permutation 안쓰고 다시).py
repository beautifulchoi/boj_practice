#수열의 차이를 최대로

from itertools import permutations

n=int(input())
num_list=list(map(int, input().split()))
permutation_list=list(permutations(num_list,len(num_list)))

det=0
for seq in permutation_list:
    sum=0
    for idx in range(2,len(seq)+1):
        diff=abs(seq[idx-1]-seq[idx-2])
        sum+=diff
    if det<sum:
        det=sum

print(det)