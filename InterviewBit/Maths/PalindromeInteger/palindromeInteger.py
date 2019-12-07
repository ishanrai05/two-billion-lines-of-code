class Solution:
	# @param A : integer
	# @return an integer
	def isPalindrome(self, A):
	    num = A
	    rev = 0
	    while(num>0):
	        rev = rev*10 + num%10
	        num//=10
	    if rev == A:
	        return 1
	    return 0

	def isPalindrome2(self, A):
        if str(A)[::-1]==str(A):
            return 1
        return 0
        