class Solution:
    # @param A : list of integers
    # @return an integer
    def firstMissingPositive(self, A):
        A = list(filter(lambda x:x>0,A))
        N=len(A)

        for i in range(N):
            pos=abs(A[i])
            if pos<N:
                if A[pos]>0:
                    A[pos]*=-1
        for i in range(1,N):
            if A[i]>0:
                return i
        return N+1
