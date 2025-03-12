struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

class solution{
    public:
        vector<int> iterativeInorder(TreeNode* root){
            stack<TreeNode*> st;
            vector<int> res;
            TreeNode* node = root;

            while(true){
                if(node != NULL){
                    st.push(node);
                    st.pop();
                    node = node->left;
                }else{
                    if(st.empty()){
                        break;
                    }

                    node = st.top();
                    st.pop();
                    res.push_back(node->data);
                    node = node->right;
                }
            }
            return res;
        }
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    solution sol;
    vector<int> ans = sol.iterativeInorder(root);

    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}