def divide(arr, n):
    det=[]
    if len(arr)<=1:
        return arr
    else:
        arr=[row[n//2:] for row in arr[:n//2]]
        det_num=True
        for i in range(n//2):
            for j in range(n//2):
                if arr[i][j]!=arr[0][0]:
                    det_num=False
                    break
            if det_num==False:
                break
        if det_num==True:
            
        arr_2=[row[:n//2] for row in arr[:n//2]]
        arr_3=[row[:n//2] for row in arr[n//2:]]
        arr_4=[row[n//2:] for row in arr[n//2:]]
        
        
            


n=int(input())
arr=[[] for i in range(n)]
for i in range(n):
    arr[i]=list(map(int, input().split()))



