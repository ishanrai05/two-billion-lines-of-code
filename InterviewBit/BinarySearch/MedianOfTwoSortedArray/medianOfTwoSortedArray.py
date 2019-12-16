def findMedianSortedArrays(A, B):
        n = len(A)
        m = len(B)
        if m>n:
            m,n=n,m
            A,B=B,A
        if m==0:
            return float(A[n/2])
        max_idx = m+n+1
        start = 0
        end = n
        
        while(start<=end):
            i = (start+end)//2
            j = max_idx//2-i # i+j = n-i + m-j
            print (i,j)
            if (i<n-1 and j<m-1):
                if A[i]<B[j+1] and B[j]<A[i+1]:
                    if (m+n)%2!=0: #odd
                        return float(max(A[i],B[j]))
                    else: return (A[i]+B[j])/2.0
                elif A[i] < B[j+1] and B[j]>A[i+1]:
                    start = i+1
                else:
                    end = i-1
            elif (i==0):
                if A[i]<B[j] and A[i+1]>B[j]:
                    if (m+n)%2!=0:
                        return float(max(A[i],B[j]))
                    else: return (A[i]+B[j])/2.0

                elif A[i]>B[j]:

A = [ -40, -25, 5, 10, 14, 28, 29, 48 ]
B = [ -48, -31, -15, -6, 1, 8 ]

print (findMedianSortedArrays(A,B))