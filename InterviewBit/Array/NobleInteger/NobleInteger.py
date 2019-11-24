class Solution:
	# @param A : list of integers
	# @return an integer
	def solve(self, A):
        A.sort()
        n = len(A)
        if A[n-1]==0:
            return 1
        for i in range(n-1):
            if n-1-i== A[i] and A[i]!=A[i+1] :
                return 1
        return -1