class Solution:
    # @param A : string
    # @param B : integer
    # @return a strings
    def convert(self, A, B):
        if len(A)<=2 or B==1:
            return A
        arr = []
        for i in range(B):
            arr.append([])
        j=0
        flag = True
        i=0
        while(i<len(A)):
            arr[j].append(A[i])
            i+=1
            if j==B-1:
                flag = False
            elif j==0:
                flag=True
            if flag:
                j+=1
            else:
                j-=1
        ret = []
        for i in arr:
            ret +=i
        ret = "".join(ret)
        return (ret)