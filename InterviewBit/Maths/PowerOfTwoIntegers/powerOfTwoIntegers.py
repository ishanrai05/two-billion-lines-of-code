class Solution:
    # @param A : integer
    # @return an integer
    def isPower(self, A):
        
        if A==1:
            return 1
        i=2
        while(i*i<=A):
            if round(pow(A,1/i),5)%1==0:
                return 1
            i+=1
        return 0