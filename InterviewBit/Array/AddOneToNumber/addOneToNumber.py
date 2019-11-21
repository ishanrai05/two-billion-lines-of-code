class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, A):
        A.insert(0,0)
        A[-1] += 1
        if A[-1]==10:
            n = len(A) - 1
            while (A[n]==10):
                A[n] = 0
                n=n-1
                A[n] += 1
        while (A[0]==0):
            A.pop(0)
        return A