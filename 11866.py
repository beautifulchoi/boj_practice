#원형 큐

n,k=map(int, input().split())

cnt=0
idx=0
arr=[i+1 for i in range(n)]
print('<', end='')
while(cnt!=n): #모든 숫자 다 없어질 때 까지
    step=0    
    next=-1
    while(step<k):
        next+=1
        if (arr[(idx+next)%n])!=-1:
            step+=1
    idx=(idx+next)%n
    print(arr[idx], end='')
    if cnt!=n-1:
        print(', ', end='')
    else:
        print('>')
    
    arr[idx]=-1
    cnt+=1

        
    