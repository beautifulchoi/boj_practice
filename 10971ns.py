#외판원 순회2
#도시 i 에서 j로 가는 것과 j에서 i로 가는 데 드는 비용이 다름!
#만약 도시가 4개라면 다 훑을때의 최소 비용
#한 도시에서 다른 도시로 갈 수 없는 경우 0으로 표시됨, 이런경우 포함x

w=[]
n=int(input())
for _ in range(n):
    row=list(map(int, input().split()))
    w.append(row)

det=0

#어짜피 순회하기 때문에 처음에 뭐잡던 상관이 없음
def dfs(visit):
    
    