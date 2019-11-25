class Solution:
    # @param A : tuple of integers
    # @return a list of integers
    def repeatedNumber(self, A):
        n = len(A)
        A = list(A)
        A.sort()
        sum_a = sum(A)
        b = 0
        for i in range(n-1):
            if A[i] == A[i+1]:
                a = A[i]
                
        b = sum_a - n*(n+1)/2 - a
        return a, int(-b)