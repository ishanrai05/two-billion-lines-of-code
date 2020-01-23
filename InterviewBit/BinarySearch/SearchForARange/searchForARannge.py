class Solution:
    # @param A : tuple of integers
    # @param B : integer
    # @return a list of integers
    def searchRange(self, A, B):

        n = len(A)

        left = -1
        right = -1
        for i in ['L','R']:
            start = 0
            end = n-1
            while(start<=end):
                mid = (start+end)//2
                
                if A[mid]==B:
                    if i=='L':
                        end = mid-1
                        left = mid
                    elif i=='R':
                        start = mid+1
                        right = mid
                else:
                    if A[mid]>B:
                        end = mid-1
                    else:
                        start = mid+1
                        
        return [left,right]