class Solution:
    # @param A : integer
    # @return a list of list of integers
    def generateMatrix(self, A):
        val = [0] * A
        for x in range (A):
            val[x] = [0] * A
        
        first=0
        last=A-1
        n=0
        
        while(first<=last):
            #First Row
            for i in range(first,last+1):
                n+=1
                val[first][i]=n
                
            #last column
            for i in range(first+1,last+1):
                n+=1
                val[i][last]=n
                
            #last row
            for i in range(last-1,first,-1):
                n+=1
                val[last][i]=n
                
            
            #first column
            for i in range(last,first,-1):
                n+=1
                val[i][first]=n
                
            # Decrease matrix
            first+=1
            last-=1
        
        return val