def util(A):
    temp = []
    j = len(A)
    for i in range(j):
        temp.append(A[i][j-i-1])
    return temp

class Solution:
    # @param A : list of list of integers
    # @return a list of list of integers
    def diagonal(self, A):
        n = len(A)
        anti = []
        for j in range(1,n+1):
            B = [k[0:j] for k in A[0:j]]
            anti.append(util(B))
        for j in range(1,n):
            B = [k[j:n] for k in A[j:n]]
            anti.append(util(B))
        return anti