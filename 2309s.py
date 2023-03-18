#일곱난쟁이 문제
#아홉난쟁이 키 주어짐-> 일곱난쟁이 키 합 100
#아닌 두놈 걸러내고 찐들을 출력
heights=[]
for i in range(9):
    height=int(input())
    heights.append(height)
heights.sort()
tot=sum(heights)
det=False
for i in range(9):
    for j in range(i+1,9):
        if tot-heights[i]-heights[j]==100:
            det=True
            break
    if det==True:
        break
heights.pop(i)
heights.pop(j-1)

for h in heights:
    print(h)
