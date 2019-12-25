from collections import OrderedDict 

class Solution:
    # @param A : string
    # @return an integer
    def romanToInt(self, A):
        roman = OrderedDict()
        roman['I']=1
        roman['V']=5
        roman['X']=10
        roman['L']=50
        roman['C']=100
        roman['D']=500
        roman['M']=1000
        
        num = 0
        i=0
        n = len(A)
        while(i<n):
            ch = A[i]
            if i!=n-1:
                if roman[A[i+1]]>roman[ch]:
                    num+=roman[A[i+1]]-roman[ch]
                    i+=1
                else:
                    num+=roman[ch]
            else:
                num+=roman[ch]
            i+=1
        return num
