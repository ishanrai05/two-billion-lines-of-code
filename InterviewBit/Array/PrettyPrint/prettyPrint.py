class Solution:
    # @param A : integer
    # @return a list of list of integers
    def prettyPrint(self, A):

        res = []
        n = 2*A-1
        for i in range(n):
            res.append([0]*n)

        first = 0
        last = n
        i = A
        while(i!=0):
            for j in range(first,last):
                res[first][j]=i
                res[j][last-1]=i
                res[last-1][j]=i
                res[j][first]=i
            
            i-=1
            first += 1
            last-=1
        return res