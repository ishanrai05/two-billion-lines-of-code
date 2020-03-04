vector<int> Solution::solve(int A, int B, int C, int K) {
    set<int> heap;
    heap.insert(A);
    heap.insert(B);
    heap.insert(C);
    vector<int> ans;
    while(K--){
        int num=*heap.begin();
        heap.erase(heap.begin());
        ans.push_back(num);
        heap.insert(num*A);
        heap.insert(num*B);
        heap.insert(num*C);
    }
    return ans;
}
