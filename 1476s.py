#날짜 계산
#E 1~15 
#S 1~28
#M 1~19

e,s,m= map(int, input().split())
x=0
y=0
z=0
cnt=0
while(True):
    if x>15:
        x=x-15
    if y>28:
        y=y-28
    if z>19:
        z=z-19
    if x==e and y==s and z==m:
        break
    x+=1; y+=1; z+=1; cnt+=1; 

print(cnt)
                