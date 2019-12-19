class Solution:
    # @param A : string
    # @param B : string
    # @return an integer
    def compareVersion(self, A, B):
        A = A.split('.')
        B = B.split('.')
        max_length = len(A) if len(A)>len(B) else len(B)
        for i in range(len(A),max_length):
            A.append('0')
        for j in range(len(B),max_length):
            B.append('0')
        
        for i in range(max_length):
            a = int(A[i])
            b = int(B[i])

            if a>b:
                return 1
            if b>a:
                return -1
        return 0