// Approach 1 - Binary Search with 90+ beats and STL functions
class Solution {
public:
    int check(vector<int>& piles, int h, int mid) {
        int ans = 0;
        for (int i = 0; i < piles.size(); i++) {
            ans += (piles[i] / mid);
            if (piles[i] % mid != 0) {
                ans++;
            }
        }
        return ans <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = (low + high) >> 1;
            if (check(piles, h, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

// Approach 2 - Binary Search with low beats and custom functions
#include<bits/stdc++.h>
class Solution {
private:
    long long int findMax(vector<int>& piles) {
        long long int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, (long long int)piles[i]);
        }
        return maxi;
    }

private:
    long long int calculateTotalHours(vector<int>& piles, int hourly) {
        long long int totalH = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)piles[i] / (double)hourly);
        }
        return totalH;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long int totalHours = calculateTotalHours(piles, mid);
            if (totalHours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};