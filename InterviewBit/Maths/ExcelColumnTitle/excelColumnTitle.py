class Solution:
    # @param A : integer
    # @return a strings
    def convertToTitle(self, A):
        
        num={}
        for i in range(26):
            num[i+1]=chr(i+65)
        if A<=26:
            return num[A]
        num[0]='Z'
        
        n = A
        
        ret = ''
        while(n>0):
            rem = n%26
            ret += num[rem]
            n//=26
            if rem==0:
                n=n-1
        return ret[::-1]
    
    def convertToTitle2(self, A):

        ans = ''
        while A:
            ans, A = chr(ord('A')+(n-1)%26)+ans, (A-1)//26
        return ans