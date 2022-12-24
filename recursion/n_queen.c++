class Solution
{
public:
    bool isSafe(int row, int col, vector<string> board, int n)
    {
        int duprow = row;
        int dupcol = col;
        while (row >= 0 && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        col = dupcol;
        row = duprow;

        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            col--;
        }

        row = duprow;
        col = dupcol;

        while (row < n && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }

        return true;
    }

public:
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        solve(0, board, ans, n);
        return ans;
    }
};

// for 4 * 4 matrix output will be 2

class Solution
{
public:
    vector<vector<string>> ans;
    int nl;

    bool check(vector<string> &v, int row, int col)
    {
        /* Check this row on left side */
        for (int i = 0; i < col; i++)
            if (v[row][i] == 'Q')
                return false;
        /* Check upper diagonal on left side */
        for (int i = row, j = col; i >= 0 and j >= 0; i--, j--)
            if (v[i][j] == 'Q')
                return false;
        /* Check lower diagonal on left side */
        for (int i = row, j = col; j >= 0 and i < nl; i++, j--)
            if (v[i][j] == 'Q')
                return false;

        return true;
    }

    void solve(vector<string> &v, int col)
    {
        if (col >= nl)
        {
            ans.push_back(v);
            return;
        }

        for (int i = 0; i < nl; i++)
        {
            if (check(v, i, col))
            {
                v[i][col] = 'Q';
                solve(v, col + 1);
                v[i][col] = '.';
            }
        }
    }

    int totalNQueens(int n)
    {
        nl = n;
        vector<string> v(nl, string(nl, '.'));
        solve(v, 0);
        return ans.size();
    }
};