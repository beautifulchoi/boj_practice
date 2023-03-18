#n * m 체스판을 8 *8 로 잘라
#이때 다시 칠해야 할 체스보드 최솟값 출력
#문풀: 맨 왼쪽부터 출발해서 8*8로 자르고 최솟값 판정
#순서대로 한칸씩 옮기고 자르면서 최솟값 작아지면 갱신

n,m = map(int, input().split())

cboard=[]
for col in range(n):
    row=input()
    cboard.append(row)

result=[]
for startIdx in range(n-7):
    for startIdx2 in range(m-7):
        checker=0
        checker2=0    
        for c in range(startIdx,8+startIdx):
                for r in range(startIdx2,8+startIdx2):
                    if (c+r)%2==0: 
                        if cboard[c][r]!='W':
                            checker+=1
                        if cboard[c][r]!='B':
                            checker2+=1    
                    else:
                        if cboard[c][r]!='B':
                            checker+=1
                        if cboard[c][r]!='W':
                            checker2+=1

        result.append(checker)
        result.append(checker2)

print(min(result))
