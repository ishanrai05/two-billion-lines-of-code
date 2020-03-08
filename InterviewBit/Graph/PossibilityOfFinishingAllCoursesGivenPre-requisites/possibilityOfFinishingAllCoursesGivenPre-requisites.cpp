int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    int n=B.size();
    unordered_map<int,vector<int>> graph;
    vector<int> indegree(A+1);
    for (int i=0;i<n;i++){
        graph[B[i]].push_back(C[i]);
        indegree[C[i]]++;
    }
    queue<int> q;
    int ans=0;
    for (int i=1;i<indegree.size();i++){
        if (indegree[i]==0)q.push(i);
    }
    while(!q.empty()){
        int node=q.front();q.pop();
        ans++;
        for (int nei:graph[node]){
            indegree[nei]--;
            if (indegree[nei]==0) q.push(nei);
        }
    }
    return ans==A;
}
