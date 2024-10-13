class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int n = heights.size();
        int maxArea = 0;
        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || heights[st.top()] >= heights[i]))
            {
                int height = heights[st.top()];
                st.pop();
                int width;
                if (st.empty())
                {
                    width = i;
                }
                else
                {
                    width = i - st.top() - 1;
                }
                maxArea = max(maxArea, width * height);
            }
            st.push(i);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int n = matrix.size();
        if (n == 0)
            return 0;
        int c = matrix[0].size();
        int maxi = 0;
        vector<int> heights(c, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] == '1')
                {
                    heights[j] += 1; // Increase height for consecutive '1's
                }
                else
                {
                    heights[j] = 0; // Reset height if it's '0'
                }
            }
            maxi = max(maxi, largestRectangleArea(heights));
        }
        return maxi;
    }
};