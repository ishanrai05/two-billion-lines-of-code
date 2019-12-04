def fact(n):
    fact = 1
    for i in range(1,n+1):
        fact*=i
    return fact

class Solution:
    # @param A : integer
    # @return a list of integers
    def getRow(self, n):
        pascal=[]
        for k in range(n+1):
            pascal.append(fact(n)/((fact(k)*fact(n-k))))
        return pascal