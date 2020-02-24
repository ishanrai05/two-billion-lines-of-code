void solve(
    vector<string>&ans,
    unordered_map<char,vector<char>> &m,
    string&s,
    string&str,
    int index){
    if (index>str.size() or s.size()>str.size()) return;
    else if(s.size()==str.size()) ans.push_back(s);
    else {
        for (int i=index;i<str.size();i++){
            vector<char> temp=m[str[i]];
            for (int j=0;j<temp.size();j++){
                s.push_back(temp[j]);
                solve(ans,m,s,str,i+1);
                s.pop_back();
            }
        }
    }
}
vector<string> Solution::letterCombinations(string A) {
    unordered_map<char,vector<char>> m;
    char alpha = 'a';
    for (char ch='2';ch<='9';ch++){for(int i=0;i<3;i++){m[ch].push_back(alpha);alpha++;}if(ch=='7'){m[ch].push_back(alpha);alpha++;}else if(ch=='9'){m[ch].push_back(alpha);alpha++;}}m['0'].push_back({'0'});m['1'].push_back({'1'});
    string s;
    vector<string>ans;
    solve(ans,m,s,A,0);
    return ans;
}