#종이의 개수
n=int(input())

def isSameNum(n,arr):
    check=True 
    for i in range(n):
        for j in range(n):
            if arr[0][0]!=arr[i][j]:
                check=False
                break
        if check==False:
            break
    return check

def divideToN(n,arr):
    if isSameNum(n,arr):
        pass# 뭐로 리턴해야하지?

    else:
        arr1=[]
        for x in range(n):
            for y in range(n):
                arr[x][]
    


for i in range(n):
    map(int, input().split())

