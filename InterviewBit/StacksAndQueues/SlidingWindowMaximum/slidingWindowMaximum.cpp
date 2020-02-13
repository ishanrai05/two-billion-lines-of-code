vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
 
    queue<int> slider;
    vector<int> res;
    int maxInd = 0;
    auto l = A.size();
    
    if (B >= l)
    {
        auto maxEle = *max_element(A.begin(), A.begin()+l);   
        return { maxEle };
    }
    
    for (auto i = 0; i<B; ++i)
    {
        slider.push(A[i]);
        if (A[i] > A[maxInd])
            maxInd = i;
    }
    res.push_back(A[maxInd]);
    
    for (auto j = B; j<l; ++j)
    {
        if (slider.front() == A[maxInd])
        {
            maxInd = j;
            for (auto k = (j-B+1); k<j+1; ++k)
            {
                if (A[k] > A[maxInd])
                    maxInd = k;
            }
        }
        else if (A[j] > A[maxInd])
            maxInd = j;
        slider.pop();
        slider.push(A[j]);
        res.emplace_back(A[maxInd]);
    }
    return res;
}