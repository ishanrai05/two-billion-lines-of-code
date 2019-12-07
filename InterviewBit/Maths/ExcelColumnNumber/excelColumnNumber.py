class Solution:
    # @param A : string
    # @return an integer
    def titleToNumber(self, A):
        num={}
        for i in range(26):
            num[chr(i+65)]=i+1
        n=len(A)
        if n==1:
            return num[A]
        ret = 0
        for i in range(n):
            ret = num[A[i]]+26*ret
            
        return ret
        
        