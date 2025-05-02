class Solution {
    public:
    Node* t;
    void mark_par(Node* node,Node* p,unordered_map<Node*,Node*> & par,int & tar){
        if(!node) return;
        par[node]=p;
        if(node->data==tar) t=node;
        mark_par(node->left,node,par,tar);
        mark_par(node->right,node,par,tar);
    }
    
      int minTime(Node* root, int target) {
          if(!root) return 0;
          t = NULL;
          unordered_map<Node*,Node*> par;
          mark_par(root,NULL,par,target);
          
          queue<Node*> q;
          q.push(t);
          int time =-1;
          unordered_set<Node*> vis;
          vis.insert(t);
          
          while(!q.empty()){
              int n=q.size();
              for(int i =0;i<n;i++){
                  Node* node=q.front();
                  q.pop();
              
              if(node->left && vis.find(node->left)==vis.end())
              {
                  vis.insert(node->left);
                  q.push(node->left);
              }
              if(node->right && vis.find(node->right)==vis.end()){
                  vis.insert(node->right);
                  q.push(node->right);
              }
              if(par[node] && vis.find(par[node])==vis.end()){
                  vis.insert(par[node]);
                  q.push(par[node]);
              }
              }
              
              time++;
          }
          return time;
      }
  };