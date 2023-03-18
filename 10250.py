#ACM호텔 방배정
# H=높이 W= 길이
# 엘베 이동거리 신경 x /최대한 왼 선호
# 걷는 거리 같은경우 아래층 선호
#1. 걷는거리 / 2. 아래층 
import sys
input=sys.stdin.readline
t=int(input())
all_roomNum=[]
for i in range(t):
    h,w,n=map(int, input().split())
    x=((n-1)//h)+1
    y=n%h
    if y==0:
        y=h
    if x<10:
        roomNum=int(str(y)+'0'+str(x))
    else:
        roomNum=int(str(y)+str(x))
    all_roomNum.append(roomNum)
for i in all_roomNum:
    print(i)
    
            
    
