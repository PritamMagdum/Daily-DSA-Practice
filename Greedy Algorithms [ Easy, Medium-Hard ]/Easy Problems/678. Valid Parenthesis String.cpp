class Solution {
    public:
        bool checkValidString(string s) {
            int openCount = 0;
            int closeCount = 0;
            int len = s.length()-1;
    
            for(int i=0; i<=len; i++){
                if(s[i] == '(' || s[i] == '*'){
                    openCount++;
                }else{
                    openCount--;
                }
    
                if(s[len - i] == ')' || s[len -i] == '*'){
                    closeCount++;
                }else{
                    closeCount--;
                }
    
                if(openCount < 0 || closeCount < 0){
                    return false;
                }
            }
            return true;
        }
    };