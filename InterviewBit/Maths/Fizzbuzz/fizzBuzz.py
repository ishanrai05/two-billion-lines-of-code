class Solution:
    # @param A : integer
    # @return a list of strings
    def fizzBuzz(self, A):
        arr=[]
        for i in range(1,A+1):
            if i%15==0:
                arr.append("FizzBuzz")
                continue
            elif i%3==0:
                arr.append("Fizz")
                continue
            elif i%5==0:
                arr.append("Buzz")
            else:
                arr.append(i)
        return arr