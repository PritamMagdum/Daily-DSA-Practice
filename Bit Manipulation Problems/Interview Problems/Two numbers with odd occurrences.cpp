class Solution
{
public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)
    {
        long long int xorr = 0;
        for (int i = 0; i < N; i++)
        {
            xorr = xorr ^ Arr[i];
        }
        long long int rightmost = xorr & ~(xorr - 1);
        long long int b1 = 0, b2 = 0;
        for (int i = 0; i < N; i++)
        {
            if (Arr[i] & rightmost)
            {
                b1 = b1 ^ Arr[i];
            }
            else
            {
                b2 = b2 ^ Arr[i];
            }
        }

        if (b1 > b2)
        {
            return {b1, b2};
        }
        else
        {
            return {b2, b1};
        }
    }
};