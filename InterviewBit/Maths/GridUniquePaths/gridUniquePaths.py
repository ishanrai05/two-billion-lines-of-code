import math

class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def uniquePaths(self, A, B):
        
        return math.factorial(A+B-2)//(math.factorial(A-1)*math.factorial(B-1))
