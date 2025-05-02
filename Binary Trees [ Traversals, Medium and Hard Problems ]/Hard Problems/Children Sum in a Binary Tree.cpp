class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        if(!root) return true;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
        int sum = 0;
        Node* node = q.front();
        q.pop();
        if(node->left){
            sum += node->left->data;
            q.push(node->left);
        }
        if(node->right){
            sum += node->right->data;
            q.push(node->right);
        }
        
        if((node->left  || node->right) && node->data != sum) return false;
        }
       return true;
    }
};