class Solution:
    # @param A : tuple of integers
    # @param B : integer
    # @return an integer
    def findCount(self, A, B):

        n = len(A)
        
        L = -1
        R = -1
        for i in ['left','right']:
            start = 0
            end = n-1
            while(start<=end):
                mid = (start+end)//2
                if A[mid]==B:
                    if i == 'left':
                        L = mid
                        end = mid - 1
                    else:
                        R = mid
                        start = mid + 1
                else:
                    if A[mid]>B:
                        end = mid-1
                    else:
                        start = mid+1
        
        if L==-1 and R==-1:
            return 0
        
        if L==-1 or R==-1:
            return 1
        return R-L+1
