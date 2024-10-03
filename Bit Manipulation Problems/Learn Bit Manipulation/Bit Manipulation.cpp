class Solution
{
public:
    int getBit(int num, int i)
    {
        return ((num & (1 << i - 1)) != 0);
    }
    int setBit(int num, int i)
    {
        return (num | (1 << i - 1));
    }
    int clearBit(int num, int i)
    {
        int mask = ~(1 << i - 1);
        return (num & mask);
    }
    void bitManipulation(int num, int i)
    {
        cout << getBit(num, i) << " " << setBit(num, i) << " " << clearBit(num, i);
    }
};