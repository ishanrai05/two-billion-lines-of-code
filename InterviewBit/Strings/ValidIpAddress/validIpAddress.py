class Solution:
    # @param A : string
    # @return a list of strings
    def restoreIpAddresses(self, A):
        if len(A)>12 or len(A)<4:
            return []
        def is_valid(ip):
            if len(ip)==0:
                return False
            ip=str(ip)
            if len(ip)>1 and ip[0]=='0':
                return False
            if int(ip)>255:
                return False
            if len(ip)>3:
                return False
            return True

        ret = []

        for i in range(1,4):
            first = A[:i]
            if is_valid(first):
                for j in range(i+1,i+4):
                    second = A[i:j]
                    if is_valid(second):
                        for k in range(j+1,j+4):
                            third = A[j:k]
                            if is_valid(third):
                                fourth = A[k:]
                                if is_valid(fourth):
                                    ret.append(first+'.'+second+'.'+third+'.'+fourth)
        return ret