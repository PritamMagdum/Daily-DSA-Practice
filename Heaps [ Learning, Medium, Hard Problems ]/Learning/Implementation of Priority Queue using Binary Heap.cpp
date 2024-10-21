class Solution {
  public:
    int extractMax() {
        int maxElement = H[0];
        swap(H[0],H[s]);
        s--;
        shiftDown(0);
        return maxElement;
    }
};