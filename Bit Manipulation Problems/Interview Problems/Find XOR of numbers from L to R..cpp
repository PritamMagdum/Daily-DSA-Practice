public:
int helper(int n)
{
    if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else if (n % 4 == 3)
        return 0;
    else
        return n;
}
int findXOR(int l, int r)
{
    return helper(l - 1) ^ helper(r);
}
