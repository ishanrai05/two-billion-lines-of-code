class Solution:
    # @param A : list of integers
    # @param B : integer
    # @param C : integer
    # @return an integer
    def solve(self, A, B, C):

        if A==[]:
            return 0

        count = 0
        i=0
        if B==1:
            try:
                while(A[i]<C and i<len(A)):
                    i+=1
                    count+=1
            except:
                return count

        n =len(str(C))
        
        if n<B:
            return 0
        flag = True if A[0]==0 else False
        A = list(set(A))
        num = len(A)
        
        if n>B:
            if flag:
                return (num-1)*(num**(n-1))
            else:
                return n**num
        
        if n==B:
            pos=[]
            for i in str(C):
                if int(i) not in A:
                    break
                pos.append(A.index(int(i)))
            count=1
            if pos:
                for i in pos:
                    count*=(i+1)
                if flag:
                    return count+(pos[0]-1)*(num**(n-1))
                else:
                    return count+(pos[0])*(num**(n-1))
    
            
            temp = int(str(C)[0])
            pos=0
            for i in range(num-1,-1,-1):
                if temp<A[i]:
                    pos = i
                    break
            
            if flag:
                return (pos)*(num**(n-1))
            else:
                return (pos+1)*(num**(n-1))
         