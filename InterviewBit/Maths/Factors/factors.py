class Solution:
    # @param A : integer
    # @return a list of integers
    def allFactors(self, A):
        factors = []
        temp = []
        if A == 1:
            return [1]
        for i in range (1,int(math.sqrt(A))+1):
            if A%i==0:
                factors.append(i)
                if i!=math.sqrt(A):
                    temp.insert(0,int(A/i))
        factors.extend(temp)
        return factors