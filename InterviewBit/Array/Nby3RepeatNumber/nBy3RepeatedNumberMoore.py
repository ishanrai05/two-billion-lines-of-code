class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        # Moore's voting algorithm
        first = 2**32+1
        second = 2**32+1
        thresh = len(A)//3
        
        count1 = 0
        count2 = 0
        
        # candidate selection
        for i in A:
            if first == i:
                count1 +=1
            elif second == i:
                count2 +=1
            elif count1 == 0:
                first = i
                count1 += 1
            elif count2 == 0:
                second = i
                count2 += 1
            else:
                count1 -= 1
                count2 -= 1


        # testing if candidate selection is correct
        count1 = 0
        count2 = 0
        for i in A:
            if i==first:
                count1+=1
                if count1>thresh:
                    return first
            elif i == second:
                count2+=1
                if count2>thresh:
                    return second
        
        return -1