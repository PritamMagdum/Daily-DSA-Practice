// Approach 1 - substr()
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.length() == 1)
        {
            return true;
        }

        if (s.length() != goal.length())
        {
            return false;
        }

        int count = 0;
        while (count < s.length())
        {
            s = s.substr(1) + s[0];
            if (s == goal)
            {
                return true;
            }
            count++;
        }
        return false;
    }
};

// Approach 2 - concatnation
// psuedo code-

// temp = s1+s1;
// if(temp.find(s2)!=string::npos){
//     return true;
// }else{
//     return false;
// }