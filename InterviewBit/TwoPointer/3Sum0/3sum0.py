from collections import defaultdict
class Solution:
    # @param A : list of integers
    # @return a list of list of integers
    def threeSum(self, A):
        res = [0]
        n = len(A)
        find = defaultdict(lambda:False)
        A.sort()
        for i in range(n-2):
            left = i+1
            right = n-1
            if A[i]>0: 
                break
            while(left<right):
                triplet = (A[i],A[left],A[right])
                sum_a = sum(triplet)
                if (sum_a==0):
                    if not find[triplet]:
                        find[triplet]=True
                        res.append(triplet)
                if sum_a<0:
                    left+=1
                else:
                    right-=1
        return res[1:]