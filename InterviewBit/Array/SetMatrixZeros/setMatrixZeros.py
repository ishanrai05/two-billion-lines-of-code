class Solution:
    # @param A : list of list of integers
    # @return the same list modified
    def setZeroes(self, A):

        m = len(A)
        n = len(A[0])
        rows = set()
        cols = set()
        
        for i in range(m):
            for j in range(n):
                if A[i][j] == 0:
                    rows.add(i)
                    cols.add(j)
        
        for k in rows:
            for i in range(n):
                A[k][i]=0
        
        for k in cols:
            for i in range(m):
                A[i][k]=0
        
        return A