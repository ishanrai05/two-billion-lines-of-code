void dfs(vector<string>& grid, string& str,int r, int c, int i, bool &ans){
    if (ans) return;
    if (r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or i>=str.size())
        return;
    if (grid[r][c]==str[i]){
        i++;
        if (i==str.size()) {
            ans=true;
            return;
        }
        dfs(grid,str,r+1,c,i+1,ans);
        dfs(grid,str,r-1,c,i+1,ans);
        dfs(grid,str,r,c+1,i+1,ans);
        dfs(grid,str,r,c-1,i+1,ans);
    }
}
int Solution::exist(vector<string> &A, string B) {
    bool ans=false;
    for (int i=0;i<A.size();i++){
        for (int j=0;j<A[0].size();j++){
            if ((A[i][j])==B[0]){
                dfs(A,B,i,j,0,ans);
                if (ans) return 1;        
            }
        }
    }
    return 0;
}
