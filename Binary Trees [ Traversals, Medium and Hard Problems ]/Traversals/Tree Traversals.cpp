#include<bits/stdc++.h>
using namespace std;
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void inOrder(TreeNode *root,vector<int> &ino){
    if(root == nullptr) return;
    inOrder(root->left,ino);
    ino.push_back(root->data);
    inOrder(root->right,ino);
}
void preOrder(TreeNode *root,vector<int> &pre){
    if(root == nullptr) return;
    pre.push_back(root->data);
    preOrder(root->left,pre);
    preOrder(root->right,pre);
}
void postOrder(TreeNode *root,vector<int> &post){
    if(root == nullptr) return;
    postOrder(root->left,post);
    postOrder(root->right,post);
    post.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<int> ino,pre,post;
    inOrder(root,ino);
    preOrder(root,pre);
    postOrder(root,post);

    vector<vector<int>> ans;
    ans.push_back(ino);
    ans.push_back(pre);
    ans.push_back(post);

    return ans; 
}