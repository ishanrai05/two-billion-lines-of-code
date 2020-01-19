class Solution:
    # @param A : list of list of integers
    # @return the same list modified
    def rotate(self, A):
        n = len(A)
        
        B = []
        for j in range(n):
            temp=[]
            for i in range(n):
                temp.append(0)
            B.append(temp)
        
        
        j=n-1
        for k in range(n):
            i=0
            for l in range(n):
                B[i][j]=A[k][l]
                i+=1
            j-=1
    
        A = B
        del(B)
        del(temp)
    
        return A
