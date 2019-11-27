class Solution:
    # @param A : list of strings
    # @return an integer
    def max_3(self,arr,i):
        if (i > arr[0]): 
            arr[2] = arr[1] 
            arr[1] = arr[0] 
            arr[0] = i 
        elif (i > arr[1]): 
            arr[2] = arr[1] 
            arr[1] = i 
        elif (i > arr[2]): 
            arr[2] = i
        return arr
    
    def min_3(self,arr,i):
        if (i < arr[0]): 
            arr[2] = arr[1] 
            arr[1] = arr[0] 
            arr[0] = i 
        elif (i < arr[1]): 
            arr[2] = arr[1] 
            arr[1] = i 
        elif (i < arr[2]): 
            arr[2] = i
        return arr
    
    def solve(self, A):
        A = list(map(float, A))
        
        max_a= [-2**32-1]*3
        max_b= [-2**32-1]*3
        
        min_a= [2**32-1]*3
        min_b= [2**32-1]*3
        min_c = 2**32-1
        
        a=[]
        b=[]
        c=[]
        
        for i in A:
            if i<0.66666667:
                max_a = self.max_3(max_a,i)
                min_a = self.min_3(min_a, i)
                a.append(i)
            elif i<1:
                min_b = self.min_3(min_b,i)
                max_b = self.max_3(max_b,i)
                b.append(i)
            else: 
                c.append(i)
                min_c = min(min_c,i)
        
        # case 1 aaa
        if len(a)>=3:
            if sum(max_a)>1:
                return 1
        
        # case2 aab
        if len(a)>=2 and len(b)>=1:
            s = max_a[0]+max_a[1]
            for j in b:
                if s+j<2 and s+j>1:
                    return 1
        
        # case 3 aac
        if len(a)>=2 and len(c)>=1:
            if sum([min_a[0],min_a[1],min_c])<2:
                return 1
        
        # case 4
        if len(a)>=1 and len(b)>=2:
            s=min_b[0]+min_b[1]
            for i in a:
                if i+s>1 and i+s<2:
                    return 1
        
        # case 5
        if len(a)>=1 and len(b)>=1 and len(c)>=1:
            if sum([min_a[0],min_b[0],min_c])<2:
                return 1
        return 0
                
                
                
                