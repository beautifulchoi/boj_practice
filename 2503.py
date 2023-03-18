#완전정복- 숫자야구
n= int(input())
import itertools 
data = [1,2,3,4,5,6,7,8,9] 
numlst = list(itertools.permutations(data, 3))
finNum = list(itertools.permutations(data, 3))
for tryCount in range(n):
    posNum, strike, ball = map(int, input().split())
    for num in numlst:
        st=0
        b=0
        #num=(1,2,3), .....
        posLst=list(str(posNum))
        #posLst=[1,2,3] ...
        for i in range(3):
            if str(num[i])==posLst[i]:
                st+=1
            elif str(num[i]) in posLst:
                b+=1
        
        if (strike!=st) or (ball!=b):
            if num in finNum:
                finNum.remove(num)

finNum=set(finNum)
print(len(finNum))
                