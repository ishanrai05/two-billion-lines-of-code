class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def searchInsert(self, A, B):

        n = len(A)
        
        if B<=A[0]:
            return 0
        if B>=A[n-1]:
            return n
        
        end = n-1
        start = 0
        
        pos = -1
        
        while(start<=end):
            mid = (start+end)//2
            if A[mid] < B:
                start = mid + 1
            else:
                end = mid

        return start

        end = n-1
        start = 0
        
        while(start<=end):
            mid = (start+end)//2
            if (A[mid-1]<B and A[mid]>B):
                return mid
            if (A[mid+1]>B and A[mid]<B):
                return mid+1        
            elif A[mid]>B:
                end = mid-1
            else:
                start = mid+1
                
                
                
                
                
                
                
                
                
                
                