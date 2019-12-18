class Solution:
    # @param A : string
    # @param B : string
    # @return a strings
    def addBinary(self, A, B):
        if A=='1' and B=='1':
            return '10'
        if A=='0' and B=='1' or A=='1' and B=='0':
            return '1'
        if A=='0' and B=='0':
            return '0'
        def addOne(a,b,carry):
            temp = a+b
            if carry=='0':
                if temp=='00':
                    return '0','0'
                elif temp=='01' or temp=='10':
                    return '1','0'
                return '0','1'
            elif carry=='1':
                if temp=='00':
                    return '1','0'
                elif temp=='01' or temp=='10':
                    return '0','1'
                else:
                    return '1','1'
        if len(A)<len(B):
            A,B=  B,A
        n = len(A)
        m = len(B)
        B = '0'*(n-m)+B
        A = '0'+A
        B = '0'+B
        carry = '0'
        ret = ''
        for i in range(1,n+2):
            val, carry = addOne(A[-i],B[-i],carry)
            ret = str(val) + str(ret)
        
        if ret[0]=='0':
            return ret[1:]
        return ret