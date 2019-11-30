class Solution:
    # @param A : list of integers
    # @return a list of integers
    def nextPermutation(self, A):
        
        n=len(A)
        if n==1:
            return A
        
        # Find max i for which A[i-1]<A[i]
        max_i=None
        for i in range(1,n):
            if A[i-1]<A[i]:
                max_i = i-1
        
        # if no such i exists then array is in last permuatation
        # return the next permmution which is the first permutation
        if max_i==None:
            return sorted(A)
        
        # find max_j such that A[max_j]>A[max_i] for j>max_j

        max_j = max_i
        for j in range(max_i, n):
            if A[j]>A[max_i]:
                max_j = j

        # Swap max_i and max_j
        A[max_j],A[max_i]=A[max_i],A[max_j]

        # Reverse the array following the max_i
        # This will give the next permutation
        A[max_i+1:]=A[max_i+1:][::-1]

        return A