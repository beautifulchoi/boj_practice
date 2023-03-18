# 종말의 숫자순서 찾기
# 6이 연속으로 3번이상 들어가는게 종말의 수
# n번째 종말의 수 찾기

n= int(input())
num=665
cnt=0
while(cnt!=n):
    num+=1
    # 쭈욱 서칭해서 666이라는 숫자 들어있으면 카운트 증가시키기
    if "666" in str(num):
        cnt+=1

print(num)

    