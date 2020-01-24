class Solution:
    # @param A : list of list of integers
    # @return an integer
    def findMedian(self, A):
        test = []
        for i in A:
            test.extend(i)
        test.sort()
        n = len(test)
        if n%2==0:
            return (test[n//2]+test[n//2+1])/2.0
        return test[n//2]