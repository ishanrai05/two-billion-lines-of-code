unordered_map<int,vector<int>> graph;
pair<int,int> bfs(int node){
    queue<int> q; q.push(node);
    vector<int>dist(graph.size(),-1); dist[node]=0;
    int max_dist=0,max_idx;
    while(!q.empty()){
        int x=q.front();q.pop();
        for (int nei:graph[x]){
            if (dist[nei]==-1){
                dist[nei]=dist[x]+1;
                q.push(nei);
                if (dist[nei]>max_dist){
                    max_dist=dist[nei];
                    max_idx=nei;
                }
            }
        }
    }
    return {max_idx,max_dist};
}
int Solution::solve(vector<int> &A) {
    if (A.size()<=1) return 0;
    graph.clear();
    int root=-1;
    for (int x=0;x<A.size();x++){
        if (A[x]==-1) root=x;
        else {
            graph[A[x]].push_back(x);
            graph[x].push_back(A[x]);
        }
    }
    pair<int,int>t1=bfs(root);
    pair<int,int>t2=bfs(t1.first);
    return t2.second;
}
