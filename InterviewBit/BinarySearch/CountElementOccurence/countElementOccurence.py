class Solution:
    # @param A : tuple of integers
    # @param B : integer
    # @return an integer
    def findCount(self, A, B):

        n = len(A)
        first = 0
        last = n-1
        idx = -1
        while(first<=last):
            mid = (first+last)/2
            if A[mid]==B:
                idx = mid
                break
            elif A[mid]>B:
                last = mid-1
            else:
                first = mid+1
        
        if idx==-1:
            return 0
        count = 1
        countL = 0
        countR = 0
        foundL = False
        foundR = False
        i=1
        
        while(True):
            L = idx-i
            
            if L==-1:
                foundL=True
            
            if not foundL:
                if A[L]!=B:
                    foundL = True
                else:
                    countL+=1
            
            
            R = idx+i
            if R==n:
                foundR = True
        
            
            if not foundR:
                if A[R]!=B:
                    foundR = True
                else:
                    countR+=1
            
            if (foundL==True and foundR==True):
                break
            i+=1
        return(count+countL+countR)