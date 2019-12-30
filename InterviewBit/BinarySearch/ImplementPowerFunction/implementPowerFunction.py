def power(a,b):
    print ('-'*10)
    print (a,b)
    if b<1:
        return 1
    if b==1:
        return a
    ans = power(a,b//2)*power(a,b-b//2)
    print (ans)
    return ans

class Solution:
    # @param x : integer
    # @param n : integer
    # @param d : integer
    # @return an integer
    def pow(self, x, n, d):
        return power(x,n)%d

ans = Solution().pow(71045970,41535484,64735492)
print (ans)