class Solution:
    # @param A : integer
    # @return a list of integers
    def sieve(self, A):
        primes = [1]*(A+1)
        primes[0] = primes[1] = 0
        for i in range (int(math.sqrt(A))+1):
            if primes[i] == 1:
                j=2
                while(i*j<=A):
                    primes[i*j]=0
                    j+=1
        num = []
        for i in range(A+1):
            if primes[i]==1:
                num.append(i)
        return num