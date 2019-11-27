class Solution:
    # @param A : list of integers
    # @return a list of integers
    def subUnsort(self, A):
        
        B = sorted(A)
        if B==A:
            return [-1]
        
        l_found = None
        r_found = None
        
        for i in range(len(A)):
            if A[i]!=B[i]:
                l_found = i
                break
        
        for i in range(len(A)-1,-1,-1):
            if B[i]!=A[i]:
                r_found = i
                break
        
        return [l_found, r_found]
