#펠린드롬을 만들고 이 때의 문자열갯수 
#중요한건 팰린드롬을 만드는게 아니라 몇개나 더 필요한지만 이다
#부분 팰린드롬을 안에서 만들수 있으면 나머지만 뒤집으면 됨

#abab->ababa  // bab 가 팰린드롬임
#qwerty 안쪽에 펠린드롬 하나도 없음
# abacaba-> 그자체로 팰린드롬
#hibara -> ara 팰린드롬
# 앞자리부터 글자를 하나씩 없애면서 나머지가 팰린드롬인가를 비교해보면된다  
#부분 팰린드롬이 없다면 그 문자열 곱하기 2 해주면됨
s=input()
num=len(s)
#인덱싱 말고 하나씩 비교해서 하는법
def isPal(string):
    if string==string[-1]:
        return True 

for i in range(num):
    if isPal(s)!=True:
        s=s[i:]
        if len(s)==0:
            print(num*2 -1)
            break
    else:
        print(num+i)
        break
         