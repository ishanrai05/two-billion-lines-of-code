class Solution:
    # @param A : integer
    # @return a strings
    def findDigitsInBinary(self, A):
        if A==0:
            return '0'
        num = ''
        while A!=0:
            rem = A%2
            A = A//2
            num = str(rem)+num
        return num