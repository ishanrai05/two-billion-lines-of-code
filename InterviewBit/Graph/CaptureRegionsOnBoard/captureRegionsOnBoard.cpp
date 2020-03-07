void dfs(vector<vector<char>> &grid, int i, int j){
    if (i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]!='O') return;
    grid[i][j]='Y';
    dfs(grid,i+1,j);
    dfs(grid,i-1,j);
    dfs(grid,i,j+1);
    dfs(grid,i,j-1);
    
}
void Solution::solve(vector<vector<char> > &grid) {
    int r=grid.size();
    if (r==0) return;
    int c=grid[0].size();
    if (c==1) return;
    for (int i=0;i<r;i++){
        dfs(grid,i,0);
        dfs(grid,i,c-1);
    }
    for (int i=0;i<c;i++){
        dfs(grid,0,i);
        dfs(grid,r-1,i);
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            if (grid[i][j]=='O') grid[i][j]='X';
            if (grid[i][j]=='Y') grid[i][j]='O';
        }
    }
    return;
}
