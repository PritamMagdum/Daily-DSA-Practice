class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
          vector<long long> res;
        queue<TreeNode*> q;
        
        q.push(root);              
        while (!q.empty()) {
            int n = q.size();
            long long sum = 0;
            
            while (n--) {
                TreeNode* node = q.front(); q.pop();   
                sum += (long long)node->val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.push_back(sum);     // Store the sum of the current level
        }

        // If k is greater than the number of levels, return -1
        if (k > res.size()) return -1;
        
        // Sort the level sums in descending order
        sort(res.begin(), res.end(), greater<long long>());
        
        // Return the k-th largest level sum (k-1 due to 0-based indexing)
        return res[k-1];
    }
}