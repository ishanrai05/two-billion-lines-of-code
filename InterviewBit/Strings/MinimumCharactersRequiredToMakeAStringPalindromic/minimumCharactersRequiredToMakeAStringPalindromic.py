class Solution:
    # @param A : string
    # @return an integer
    def solve(self, A):
        if (A==A[::-1]):
            return 0
        n = len(A)
        flag1,flag2=0,0
        for i in range(1,n//2+1):
            t1 = A[:2*i]
            t2 = A[:2*i+1]
            if t1 == t1[::-1]:
                flag1 = i
            if t2==t2[::-1]:
                flag2 = i
                
        flag = True if flag2>=flag1 else False
        if flag:
            return (n-1-2*flag2)
        
        return (n-2*(flag1))