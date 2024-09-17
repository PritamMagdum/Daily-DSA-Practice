class Solution {
public:
    void findCombinations(int ind, string& digits, string& temp,
                          vector<string>& ans,
                          unordered_map<char, string> &mpp) {
                            if(ind==digits.size()){
                                ans.push_back(temp);
                                return;
                            }

                            string str = mpp[digits[ind]];
                            for(int j=0;j<str.size();j++){
                                temp.push_back(str[j]);
                                findCombinations(ind+1,digits,temp,ans,mpp);
                                temp.pop_back();
                            }
                          }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        unordered_map<char, string> mpp;
        mpp['2'] = "abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";

        vector<string> ans;
        string temp;
        findCombinations(0, digits, temp , ans, mpp);
        return ans;
    }
};