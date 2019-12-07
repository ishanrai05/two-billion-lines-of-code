class Solution:
    # @param A : integer
    # @return an integer
    def trailingZeroes(self, A):
        count = 0
        n=5
        while(n<=A):
            count += A//n
            n=n*5
            
        return count