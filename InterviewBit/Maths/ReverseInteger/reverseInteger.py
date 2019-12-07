class Solution:
    # @param A : integer
    # @return an integer
    def reverse(self, A):
        flag=False
        
        if A<0:
            flag=True
        
        num=abs(A)
        
        rev=0
        while(num>0):
            rev = rev*10 + num%10
            if rev>2*32 :
                return 0
            num//=10
        if flag:
            return -1*rev
        return rev