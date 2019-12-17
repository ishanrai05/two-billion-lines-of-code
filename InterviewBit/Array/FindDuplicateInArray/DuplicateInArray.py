class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        n=len(A)-1
        repeated_num = sum(A)-(n*(n+1)/2)
        return int(repeated_num)