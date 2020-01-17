from functools import cmp_to_key

def myCompare(num1, num2):
        n = int(str(num1)+str(num2))
        m = int(str(num2)+str(num1))
        if n>m:
            return 1
        if m>m:
            return -1
        return 0
    

class Solution:
    # @param A : tuple of integers
    # @return a strings
    

    def largestNumber(self, A):
        l1 = sorted(A, key=cmp_to_key(myCompare), reverse=True)
        l1 = map(str, l1)
        l1 = ''.join(l1)
        print (l1)
        return l1
            