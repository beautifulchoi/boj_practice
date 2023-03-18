#곱셈// 재귀함수 
a,b,c=map(int, input().split())

def recursionOfpow(x,y):
    if x==1 or y==1:
        return x
    else:
        temp=recursionOfpow(x,y//2)
        if y%2==0: #짝수라면
            return (temp%c)*(temp%c)%c
        else:
            return (temp%c)*(temp%c)*(x%c)%c
            

print(recursionOfpow(a,b))

