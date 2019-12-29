def students(A,V):
    initial_sum = 0
    count = 1
    for i in A:
        initial_sum += i
        if initial_sum>V:
            initial_sum = i
            count+=1
    return count
    

class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def books(self, A, B):
        n = len(A)
        if n<B:
            return -1
        low = max(A)
        high = sum(A)
        ans = -1
        while(low<=high):
            mid = low + (high-low)/2
            no_of_students = students(A,mid)
            if no_of_students<=B:
                ans = mid
                high = mid-1
            else:
                low = mid+1
        return ans
