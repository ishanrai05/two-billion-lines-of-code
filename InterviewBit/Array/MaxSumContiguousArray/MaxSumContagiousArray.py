class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maxSubArray(self, A):
        max_sum = 0
        running_sum = 0
        
        for i in A:
            running_sum += i
            if running_sum > max_sum:
                max_sum = running_sum
            if running_sum<0:
                running_sum=0
        return max_sum