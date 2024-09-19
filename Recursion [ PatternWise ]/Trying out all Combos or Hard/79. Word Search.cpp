class Solution
{
public:
    bool DFS(vector<vector<char>> &board, string word, int r, int c, int wordIndex)
    {
        // Valid Case
        if (wordIndex == word.length())
            return true;

        // Out-of-Bound Case
        int rows = board.size();
        int cols = board[0].size();

        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return false;

        // Invalid Case
        if (board[r][c] == ' ' || board[r][c] != word[wordIndex])
            return false;

        // Mark as Visited
        char ch = board[r][c];
        board[r][c] = ' ';

        if (DFS(board, word, r - 1, c, wordIndex + 1) ||
            DFS(board, word, r, c + 1, wordIndex + 1) || DFS(board, word, r + 1, c, wordIndex + 1) || DFS(board, word, r, c - 1, wordIndex + 1))
            return true;

        board[r][c] = ch;
        return false;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        int m = board.size();
        int n = board[0].size();

        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                if (board[r][c] == word[0])
                {
                    bool found = DFS(board, word, r, c, 0);
                    if (found)
                        return true;
                }
            }
        }
        return false;
    }
};