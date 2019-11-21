class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @return an integer
    
    def steps(self, x,y,x_next,y_next):
        if (x,y) == (x_next, y_next):
            return 0
        else:
            return max(abs(x-x_next),abs(y-y_next))
                
    def coverPoints(self, A, B):
        count = 0
        n = len(A)
        for i in range(n-1):
            x, y = A[i], B[i]
            x_next, y_next = A[i+1], B[i+1]
            count += self.steps(x,y,x_next, y_next)
        return count