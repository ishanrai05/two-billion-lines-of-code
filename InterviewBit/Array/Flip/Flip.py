class Solution:
    # @param A : string
    # @return a list of integers
    def flip(self, A):
        n=len(A)
        B = []
        max_sum = -1
        curr_sum = 0
        temp_L = 0
        count = 0
        
        for i in range(n):


            if A[i]=='0':
                count += 1
                curr_sum += 1

            else :
                curr_sum -= 1

            if curr_sum < 0:
                curr_sum = 0
                temp_L = i+1
                continue

            if curr_sum>max_sum:
                max_sum = curr_sum
                L = temp_L
                R = i
    
        if count==0:
            return []
        return L+1, R+1
            