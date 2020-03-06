string Solution::multiple(int A) {
    queue<pair<string,int>> pq;
    pq.push({"1",1});
    vector<bool>visited(A);
    visited[1]=true;
    string ans="";
    while(!pq.empty()){
        string top=pq.front().first;int rem=pq.front().second;pq.pop();
        int r0=(rem*10)%A;
        if (!visited[r0]){
            string ans0=top+"0";
            if (r0==0){
                ans=ans0;
                break;
            }
            visited[r0]=true;
            pq.push({ans0,r0});
        }
        int r1=(rem*10+1)%A;
        if (!visited[r1]){
            string ans1=top+"1";
            if (r1==0){
                ans=ans1;
                break;
            }
            visited[r1]=true;
            pq.push({ans1,r1});
        }
    }
    return ans;
}
