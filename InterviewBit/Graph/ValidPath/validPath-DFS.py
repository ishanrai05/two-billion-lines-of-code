import sys
sys.setrecursionlimit(90000)
class Solution:
	def solve(self, row, col, N, R, rows, cols):
        graph=[[0 for c in range(col+1)]for r in range(row+1)]
        for r in range(row+1):
            for c in range(col+1):
                for i,j in zip(rows,cols):
                    dist=(r-i)**2+(c-j)**2
                    if dist<=R**2:
                        graph[r][c]=1
                        break
        if (graph[0][0]==1 or graph[row][col]==1): return "NO"
        dist=[(-1,-1),(-1,0),(-1,1),(1,0),(1,-1),(1,1),(0,1),(0,-1)]        
        def dfs(r,c):
            if graph[row][col]==2: return
            graph[r][c]=2
            for i,j in dist:
                new_r,new_c = r+i,c+j
                if 0<=new_r<=row and 0<=new_c<=col and graph[new_r][new_c]==0:
                    dfs(new_r,new_c)
        dfs(0,0)
        if graph[row][col]==2:
            return "YES"
        return "NO"
                    
                    