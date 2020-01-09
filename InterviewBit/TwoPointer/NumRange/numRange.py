class Solution:
    # @param A : list of integers
    # @param B : integer
    # @param C : integer
    # @return an integer
    def numRange(self, A, B, C):
        
        def countLessThan(arr, num):
            count = 0
            curr_sum = arr[0]
            n = len(arr)
            start = 0
            end = 0
            while(start<n and end<n):
                if curr_sum <= num:
                    end += 1
                    if end >= start:
                        count += end - start
                    if end < n:
                        curr_sum += arr[end]
                else:
                    curr_sum -= arr[start]
                    start+=1
            return count
        x = countLessThan(A,B-1)
        y = countLessThan(A,C)
        return abs(x-y)