class Solution:
    # @param A : integer
    # @return an integer
    def sqrt(self, A):

        if A==0:
            return 0
        if A in [1,2,3]:
            return 1
        start = 0
        end = A
        root= 0
        R = (A+1)**2
        L = (A-1)**2

        while(start<=end):
                mid = (start+end)/2.0
                sqr = mid**2
                if sqr == A:
                    return int(mid)
                L = (mid-0.000001)**2
                R = (mid+0.00000001)**2
                if L<A and R>A:
                    return int(mid)
                
                else:
                    if A<R and A<L:
                        end = mid
                    if A>R and A>L:
                        start = mid
                    

        return int(root)
