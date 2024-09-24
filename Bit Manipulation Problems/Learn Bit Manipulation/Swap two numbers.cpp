class Solution
{
public:
    pair<int, int> get(int a, int b)
    {
        // try without temporary variable
        pair<int, int> res;
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        res = {a, b};
        return res;
    }
};