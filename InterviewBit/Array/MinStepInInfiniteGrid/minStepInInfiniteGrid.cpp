#define loop(a,b) for(int i=a;i<b;i++)

int steps(int cx, int cy, int tx, int ty){
    if(cx==tx&&cy==ty) return 0;
    int xd = abs(cx-tx);
    int yd = abs(cy-ty);
    return int(max(xd,yd));
}
int Solution::coverPoints(vector<int> &A, vector<int> &B) {

int n=0;
    int x=A[0];
    int y=B[0];
    int size = A.size();
    loop(1,size){
        int xt = A[i];
        int yt = B[i];
        n += steps(x,y,xt,yt);
        x = xt;
        y = yt;
    }
    return n;
    
}
