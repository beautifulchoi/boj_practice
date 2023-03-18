import sys
input=sys.stdin.readline 
n=int(input())

def last_peelNum(m):
    result=(3*m*m)-(3*m)+1
    return result
peel=1
if n==1:
    print(1)
else:
    while(True):
        peel+=1
        if n <=last_peelNum(peel):
            print(peel)
            break