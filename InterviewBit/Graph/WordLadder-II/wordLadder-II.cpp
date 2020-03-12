vector<vector<string> > Solution::findLadders(string beginWord, string endWord, vector<string>& wordList) {
    if (beginWord==endWord) return {{beginWord}};
    unordered_map<string,int> visited;
    for (string word:wordList) visited[word]=-1;
    if (visited.find(endWord)==visited.end()) return {};
    visited[beginWord]=true;
    unordered_map<string,vector<string>> mp;
    int n=beginWord.size();
    for (string word:wordList){
        for (int i=0;i<n;i++){
            string key=word.substr(0,i)+"*"+word.substr(i+1);
            mp[key].push_back(word);
        }
    }
    vector<vector<string>> ret;
    bool found=false;
    int ans=0;
    queue<pair<string,vector<string>>> q;
    q.push({beginWord,{beginWord}});
    while(!q.empty()){
        int size=q.size();
        while(size--){
            string word=q.front().first;
            vector<string>temp=q.front().second;
            q.pop();
            for (int i=0;i<n;i++){
                string node=word.substr(0,i)+"*"+word.substr(i+1);
                for (string nei: mp[node]){
                    vector<string> temp2=temp;
                    if (visited[nei]==-1 or visited[nei]==ans){
                        if (nei!=endWord) visited[nei]=ans;
                        temp2.push_back(nei);
                        q.push({nei,temp2});
                    }
                    if (nei==endWord){
                        found=true;
                        ret.push_back(temp2);
                    }
                }
            }
        }
        ans++;
        if (found){ 
            sort(ret.begin(),ret.end());
            ret.erase(unique(ret.begin(),ret.end()),ret.end());
            return ret;
            
        }
    }
    return {};
}
