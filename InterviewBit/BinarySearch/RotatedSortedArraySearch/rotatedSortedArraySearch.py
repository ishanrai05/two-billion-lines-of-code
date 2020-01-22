# def pivot()

class Solution:
    # @param A : tuple of integers
    # @param B : integer
    # @return an integer
    def search(self, A, B):

        n = len(A)
        start = 0
        end = n-1
        
        while(start<=end):
            mid = (start+end)//2
            if A[mid] == B:
                return mid
            else:
                if A[start]<A[mid]:
                    if B>A[start] and B<A[mid]:
                        end = mid-1
                    else:
                        start = mid+1
                else:
                    if B>A[mid] and B<A[end]:
                        start = mid+1
                    else:
                        end = mid-1
        return -1