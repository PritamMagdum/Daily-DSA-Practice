/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
    public:
    void getPaths(Node* root,vector<vector<int>> &ans,vector<int> &tmp){
        if(!root) return;
        
        tmp.push_back(root->data);
        if(!root->left && !root->right){
            ans.push_back(tmp);
        }else{
            getPaths(root->left,ans,tmp);
            getPaths(root->right,ans,tmp);
        }
        
        tmp.pop_back();
    }
      vector<vector<int>> Paths(Node* root) {
          vector<vector<int>> ans;
          vector<int> tmp;
  
          getPaths(root,ans,tmp);
          return ans;
      }
  };