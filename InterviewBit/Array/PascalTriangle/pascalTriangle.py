class Solution:
    # @param A : integer
    # @return a list of list of integers
    def solve(self, A):
        pascal = []
        for i in range(A):
            temp=[1]
            if i==0:
                pascal.append(temp)
                continue
            elif i == 1:
                temp = [1,1]
                pascal.append(temp)
                continue
            else :
                for j in range(1,i):
                    temp.append(pascal[i-1][j-1]+pascal[i-1][j])
            temp.append(1)
            pascal.append(temp)
        return pascal
            