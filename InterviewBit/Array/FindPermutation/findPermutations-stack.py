from collections import deque
class Solution:
    # @param A : string
    # @param B : integer
    # @return a list of integers
    def findPerm(self, A, B):
        stack = deque()

        res=[0]*(B)       
        num = 0
        
        for i in range(1,B):
            if A[i-1]=='I':
                stack.append(i)
                while len(stack)>0:
                    res[num]=stack.pop()
                    num+=1
            else:
                stack.append(i)
        
        stack.append(B)
        
        while(len(stack)>0):
            res[num]=stack.pop()
            num+=1

        return res