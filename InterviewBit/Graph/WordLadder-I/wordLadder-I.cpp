int Solution::solve(string beginWord, string endWord, vector<string>& wordList) {
    unordered_map<string,bool> visited;
        for (string word:wordList) visited[word]=false;
        if (visited.find(endWord)==visited.end()) return 0;
        visited[beginWord]=true;
        unordered_map<string,vector<string>> mp;
        int n=beginWord.size();
        for (string word:wordList){
            for (int i=0;i<n;i++){
                string key=word.substr(0,i)+"*"+word.substr(i+1);
                mp[key].push_back(word);
            }
        }
        int ans=1;
        queue<string> q;
        q.push(beginWord);
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string word=q.front();q.pop();
                for (int i=0;i<n;i++){
                    string node=word.substr(0,i)+"*"+word.substr(i+1);
                    for (string nei: mp[node]){
                        if (nei==endWord) return ans+1;
                        if (!visited[nei]){
                            visited[nei]=true;
                            q.push(nei);
                        }
                    }
                }
            }
            ans++;
        }
        return 0;
}
