INT_MAX = 2**32+1
INT_MIN = -2**32-1
def avg(a,b):
    return (a+b)/2.0
class Solution:
    # @param A : tuple of integers
    # @param B : tuple of integers
    # @return a double
    def findMedianSortedArrays(self, A, B):
        n = len(A)
        m = len(B)
        
        even = True if (m+n)%2==0 else False
        if m<n:
            return self.findMedianSortedArrays(B,A)
        
        if n==0:
            if even:
                return float(B[m//2]+B[m//2-1])/2.0
            else:
                return float(B[m/2])
        
        start = 0
        end = n
        
        
        while(start<=end):
            
            i = (start+end)//2
            j = (m+n+1)//2 -i
            
            min_a = INT_MIN if i==0 else A[i-1]
            max_a = INT_MAX if i==n else A[i]

            min_b = INT_MIN if j==0 else B[j-1]
            max_b = INT_MAX if j==m else B[j]
            
            if min_a<=max_b and min_b<=max_a:
                if even:
                    return avg(max(min_a,min_b),min(max_a,max_b))
                else:
                    return max(min_a,min_b)
            if min_a>max_b:
                end = i-1
            if min_b>max_a:
                start = i+1
                
                
                
    