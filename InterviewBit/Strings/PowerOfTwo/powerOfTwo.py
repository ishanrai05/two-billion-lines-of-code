class Solution:
    # @param A : string
    # @return an integer
    def power(self, A):
        if A=='1' or int(A[-1])%2!=0:
            return 0
        def divide(a):
            q = ''
            rem = 0
            for i in a:
                num = rem*10 + ord(i)-ord('0')
                q = q+chr((num//2)+ord('0'))
                rem = num%2
            if rem!=0:
                return False
            else: return q.lstrip('0')
        
        while(A!='1'):
            A = divide(A)
            if A==False:
                return 0
        return 1