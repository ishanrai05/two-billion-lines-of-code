class Solution:
	# @param A : list of integers
	# @return an integer
	
	def maxSpecialProduct(self, A):
        N = len(A)
        mspd = 0

        s = []
        for i in range(2,N):
            lsv = 0
            rsv = 0
            j=k=i
            flag1 = flag2 = True
            while (flag1 == True and j>=0):
                if A[j]>A[i]:
                    flag1 = False
                    lsv = j
                j-=1
            while (k<N and flag2 == True):
                if A[k]>A[i]:
                    flag2 = False
                    rsv = k
                k+=1
            if lsv*rsv>mspd:
                mspd = lsv*rsv
        return mspd