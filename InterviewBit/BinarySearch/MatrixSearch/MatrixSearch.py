class Solution:
    # @param A : list of list of integers
    # @param B : integer
    # @return an integer
    def searchMatrix(self, A, B):
        n=len(A)
        m = len(A[0])
        start = 0
        end = n-1
        
        
        while(start<=end):
            mid = (start+end)//2
            if A[mid][0]<=B and A[mid][m-1]>=B:
                first = 0
                last = m-1
                while(first<=last):
                    mid2 = (first+last)//2
                    if A[mid][mid2]==B:
                        return 1
                    elif A[mid][mid2]>B:
                        last = mid2-1
                    else:
                        first = mid2+1
                return 0
            elif A[mid][0]>B:
                end = mid-1
            else:
                start = mid+1
        return 0
