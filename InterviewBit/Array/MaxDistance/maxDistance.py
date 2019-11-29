class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maximumGap(self, A):
        arr = []
        for idx, elem in enumerate(A):
            arr.append([elem,idx])
        arr.sort()
        max_diff = -1
        min_elem = arr[0][1]
        for i in range(len(A)):
            if arr[i][1]<min_elem:
                min_elem = arr[i][1]
            max_diff = max(max_diff,arr[i][1]-min_elem)
        return max_diff
