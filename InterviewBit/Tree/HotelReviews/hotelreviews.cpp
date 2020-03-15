vector<int> Solution::solve(string A, vector<string> &B) {
    unordered_set<string> s;
    string word="";
    for (int i=0;i<A.size();i++){
        if (A[i]=='_'){
            s.insert(word);
            word="";
        }
        else word+=A[i];
    }
    s.insert(word);
    auto compare = [](pair<int,int>&p1, pair<int,int>&p2){
                        if(p1.first<p2.first) return true;
                        else if (p1.first==p2.first and p1.second>p2.second) return true;
                        return false;
                    };
    priority_queue<pair<int,int>,vector<pair<int,int>>, decltype(compare)> pq(compare);
    int idx=0;
    for (int i=0;i<B.size();i++){
        string str=B[i];
        word="";
        int count=0;
        for (char ch:str){
            if (ch=='_'){
                if (s.find(word)!=s.end()){
                    count++;
                }
                word="";
            }
            else word+=ch;
        }
        if (s.find(word)!=s.end()) count++;
        pq.push({count,i});
    }
    vector<int>ans;
    while(!pq.empty()){
        // cout<<pq.top().first<<" ";
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
