#설탕 배달
#n킬로그램 배달, 봉지는 3 5
#최대한 적은 봉지로 배달 
#정확하게 n킬로 못만드는 경우 -1출력

#풀이1 brute force
#n=int(input())
#check=False
#for threeKg in range(n):
 #   for fiveKg in range(n):
 #       if n==(fiveKg*5)+(threeKg*3):
 #           print(fiveKg+threeKg)    
  #          check=True
  #          break
   # if check==True:
  #      break
  #  if threeKg==n-1:
   #     print(-1)

# 풀이2 greedy algorithm 
# 5로 나눠보고 안되면 3하나 추가 후 다시 try
n=int(input())
threebag=0
while(True):
    if n<0:
        print(-1)
        break 
    if n%5==0:
        print(threebag+(n//5))
        break
    else:
        n-=3
        threebag+=1


    
