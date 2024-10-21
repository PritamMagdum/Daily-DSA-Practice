class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        int i = 0;
        while(i<n){
            int left = 2*i+1;
            int right = 2*i+2;
            
            if(left < n && arr[i] < arr[left]){
                return false;
            }
            if(right < n && arr[i] < arr[right]){
                return false;
            }
            i++;
        }
        return true;
    }
};