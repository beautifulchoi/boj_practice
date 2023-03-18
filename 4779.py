#칸토어 집합
import math
def cantor(n,startStr):
    if len(startStr)==1:
        return startStr     
    else:
        str1=startStr[:len(startStr)//3]
        str2=startStr[len(startStr)//3:(len(startStr)//3)*2]
        str2=str2.replace('-', ' ')
        str3=startStr[((len(startStr)//3)*2):]

        str1=cantor(n//3,str1)
        str2=cantor(n//3,str2)
        str3=cantor(n//3,str3)

    return str1+str2+str3

while(True):
    try:
        n=int(input())
        str=('-'*int(math.pow(3,n)))
        print(cantor(n,str))
    except:
        break