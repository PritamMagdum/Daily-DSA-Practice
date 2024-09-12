class Solution
{
public:
    void generateStrings(int n, string str, vector<string> &result)
    {
        if (n == 0)
        {
            result.push_back(str);
            return;
        }

        if (str.empty() || str.back() == '0')
        {
            generateStrings(n - 1, str + '0', result);
            generateStrings(n - 1, str + '1', result);
        }
        else
        {
            generateStrings(n - 1, str + '0', result);
        }
    }
    vector<string> generateBinaryStrings(int num)
    {
        vector<string> result;
        generateStrings(num, "", result);
        return result;
    }
};