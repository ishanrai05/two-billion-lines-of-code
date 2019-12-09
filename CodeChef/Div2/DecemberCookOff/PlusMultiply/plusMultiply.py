# cook your dish here

import math
fact=math.factorial
input=input
int=int
t = int(input())
for i in range(t):
    n=int(input())
    strs = input().split()
    count2 = 0
    count0 = 0
    for i in strs:
        if i=='2':
            count2+=1
        if i=='0':
            count0+=1
    count2 = fact(count2)/(fact(count2-2)*2) if count2>=2 else 0
    count0 = fact(count0)/(fact(count0-2)*2) if count0>=2 else 0

    print (int(count2)+int(count0))
