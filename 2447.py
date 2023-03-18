#별찍기 -재귀함수 / 해결 안됨
def printStar(x,y,n):
    if (x//n)%3==1 & (y//n)%3==1:
        print(' ')
    else:
        if n//3==0:
            print('*')
        else:
            printStar(x,y,n//3)

n=int(input())
for x in range(n):
    for y in range(n):
        printStar(x,y,n)
    print('\n')
        
        


    
