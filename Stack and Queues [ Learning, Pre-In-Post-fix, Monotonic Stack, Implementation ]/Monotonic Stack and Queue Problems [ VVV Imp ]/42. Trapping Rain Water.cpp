class Solution {
public:
    int trap(vector<int>& height) {
        int LMax=0;
        int RMax=0;
        int Total=0;
        int L = 0;
        int n = height.size();
        int R = n-1;
        while(L<R){
            if(height[L]<height[R]){
                if(LMax > height[L]){
                    Total += LMax-height[L];
                }else{
                    LMax = height[L];
                }
                L = L+1;
            }else{
                if(RMax > height[R]){
                    Total += RMax -height[R];
                }else{
                    RMax = height[R];
                }
                R = R-1;
            }
        }
        return Total;
    }
};