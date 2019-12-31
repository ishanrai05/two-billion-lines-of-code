MOD = 10000003

class Solution:
	# @param A : integer
	# @param B : integer
	# @param C : list of integers
	# @return an integer
	def paint(self, A, B, C):

        def num_of_painters(Arr, M):
            count = 1
            sum_arr = 0
            for i in Arr:
                sum_arr+=i
                if sum_arr>M:
                    sum_arr = i
                    count+=1
            return count

        low = max(C)
        high = sum(C)
        
        while(low<=high):
            mid = (low+high)//2
            
            if num_of_painters(C, mid)<=A:
                ans = mid
                high = mid-1
            else:
                low = mid+1
        
        return (ans*B)%MOD
        