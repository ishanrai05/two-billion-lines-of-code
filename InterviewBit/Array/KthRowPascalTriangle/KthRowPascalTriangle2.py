class Solution:
    # @param A : integer
    # @return a list of integers
    def getRow(self, n):
        pascal=[1]
        for k in range(n):
            # (n,k+1) = (n,k)*(n-k)/(k+1)
            pascal.append(pascal[k]*(n-k)/(k+1))
        return pascal