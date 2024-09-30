class Solution
{
public:
    int countPrimes(int n)
    {
        vector<bool> sieve(n + 1, true);
        for (int i = 2; i * i <= n; i++)
        {
            if (sieve[i] == true)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    sieve[j] = false;
                }
            }
        }
        // for count prime no
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (sieve[i] == true)
            {
                count++;
            }
        }
        return count;
    }
};