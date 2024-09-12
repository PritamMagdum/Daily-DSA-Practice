class Solution{
public:
    void insertBottom(stack<int> &St,int num){
        if(St.empty()){
            St.push(num);
            return;
        }
        int temp = St.top();
        St.pop();
        insertBottom(St,num);
        St.push(temp);
    }
    void Reverse(stack<int> &St){
        
       if(!St.empty()){
           int num = St.top();
           St.pop();
           Reverse(St);
           insertBottom(St,num);
       }else{
           return;
       }
    }
};