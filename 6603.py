#로또/ 조합 짜기 다시풀기

def combination(S,start):
    if len(S)==6:
        S=sorted(S)
        print(*S)
    
    elif start<=len(S):
        select=S.pop(-start)
        combination(S,start+1)
        S.append(select)
        combination(S,start+1)
        

        

while(True):
        case=list(map(int, input().split()))
        if case[0]==0:
            break
        k=case[0]
        S=case[1:]
        combination(S,1)
        
        print('')

    