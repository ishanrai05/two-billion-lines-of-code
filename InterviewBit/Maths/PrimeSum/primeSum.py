class Solution:
    # @param A : integer
    # @return a list of integers
    def primesum(self, A):
        sieve = [True for i in range(A+1)]
        sieve[0]=sieve[1]=False
        k=2
        while(k*k<=A):
            if sieve[k]:
                for i in range(k*k,A,k):
                    sieve[i]=False

            k+=1
        for i in range(2,A):
            if sieve[i] and sieve[A-i]:
                return [i,A-i]