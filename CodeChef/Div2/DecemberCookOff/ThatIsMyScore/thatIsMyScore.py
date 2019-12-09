# cook your dish here
try:
    t=int(input())
    for i in range(t):
        n=int(input())
        score = [0]*11
        for i in range(n):
            p,s = str(input()).split()
            p,s = int(p),int(s)
            if p<=8:
                score[p-1]=max(score[p-1],s)
        total = sum(score)
        
        print (total)
except:
    pass