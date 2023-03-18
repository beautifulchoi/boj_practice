#스택 구현
#push,pop,size,empty,top구현
#첫줄에 명령의수 주어져(n개의 명령)
#둘쨰 줄에 부터 명령

stackArr=[]
def push(x):
    stackArr.append(x)
    return x
def pop():
    if len(stackArr)!=0:
        return stackArr.pop(-1)
    else:
        return -1
def size():
    return len(stackArr)

def empty():
    if size()==0:
        return 1
    else:
        return 0

def top():
    if not empty():
        return stackArr[len(stackArr)-1]
    else:
        return -1

import sys
n = int(sys.stdin.readline())

for i in range(1,n+1):
    cmd=input()
    if cmd=="pop":
        print(pop())
    elif cmd=="size":
        print(size())
    elif cmd=="top":
        print(top())
    elif cmd=="empty":
        print(empty())
    elif cmd[:4]=="push":
        num=int(cmd[5:])
        print(push(num))