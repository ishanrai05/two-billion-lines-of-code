vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    int N=A.size();
    int n=N;
    vector<int> ans;
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    int a=0,b=0;
    priority_queue<pair<int,pair<int,int>>>pq;
    pq.push({A[a]+B[b],{a,b}});
    set<pair<int,int>> s;
    for (int i=0;i<N;i++){
        auto it=pq.top();
        pq.pop();
        ans.push_back(it.first);
        a=it.second.first;
        b=it.second.second;
        
        if(s.find({a+1,b})==s.end()){
            pq.push({A[a+1]+B[b],{a+1,b}});
            s.insert({a+1,b});
        }
        if (s.find({a,b+1})==s.end()){
            pq.push({A[a]+B[b+1],{a,b+1}});
            s.insert({a,b+1});
        }
    }
    return ans;
}
