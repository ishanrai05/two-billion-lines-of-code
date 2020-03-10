vector<int> Solution::stepnum(int A, int B) {
    queue<int>q({1,2,3,4,5,6,7,8,9});
    vector<int> ans;
    if (A==0) ans.push_back(0);
    int i=1;
    while(q.front()<=B){
        int front=q.front();q.pop();
        if (front>=A) ans.push_back(front);
        int lastd=front%10;
        if (lastd>0) q.push(front*10+lastd-1);
        if (lastd<9) q.push(front*10+lastd+1);
    }
    return ans;
}
