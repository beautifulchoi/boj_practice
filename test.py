#n개중에 m을 선택하는 경우의 수는? 

def combination(n,m,start, selected, totList):
    
    if len(selected)==m:
        print(selected)
        totList.append(selected)
        print(len(totList))
        if totList!=None:
            return len(totList)

    elif start<=n:
        arr=[i for i in range(1,n+1)]
        selected.append(arr.index(start))
        combination(n,m,start+1,selected,totList)
        selected.pop()
        combination(n,m,start+1,selected,totList)

       
        

print(combination(6,4,1,[],[]))
#하나를 뽑으면 그거제외하고 m-1 뽑기임
#하나 뽑고 combi(n, m-1 ) 호출 때리면됨

