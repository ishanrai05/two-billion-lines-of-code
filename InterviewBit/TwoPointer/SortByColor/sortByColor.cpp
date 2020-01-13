void Solution::sortColors(vector<int> &A) {
    int ptr=0;
    int temp;
    int n = A.size();
    int i;
    for (int value=0;value<=2; value++){
        i = ptr;
        while(i<n){
            if (A[i]==value){
                temp = A[ptr];
                A[ptr] = A[i];
                ptr++;
                A[i] = temp;
            }
            i++;
        }
    }
}
