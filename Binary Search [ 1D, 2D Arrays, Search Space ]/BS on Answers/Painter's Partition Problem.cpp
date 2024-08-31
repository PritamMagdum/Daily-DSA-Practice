int calPainters(vector<int> &bords, int painters)
{
    int bord = 1;
    long long bordPainter = 0;
    for (int i = 0; i < bords.size(); i++)
    {
        if (bordPainter + bords[i] <= painters)
        {
            bordPainter += bords[i];
        }
        else
        {
            bord += 1;
            bordPainter = bords[i];
        }
    }
    return bord;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    if (k > n)
        return -1;
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int noOfPainters = calPainters(boards, mid);
        if (noOfPainters > k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}