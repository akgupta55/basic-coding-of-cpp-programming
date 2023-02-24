#include <iostream>
using namespace std;
int lowerTriSum(int arr[3][3], int row, int col)
{
    int sum1 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // cout << arr[i][j] << " ";
            sum1 += arr[i][j];
        }
        // cout << endl;
    }
    return sum1;
}
int upperTriSum(int arr[3][3], int row, int col)
{
    int sum2 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = row - 1; j >= i; j--)
        {
            // cout << j << " ";
            sum2 += arr[i][j];
        }
        // cout << endl;
    }
    return sum2;
}

void snakePattern(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

void transpose(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(arr[j][i], arr[i][j]);
        }
    }
}

void rotate90degree(int arr[3][3], int row, int col) // amzone makemytrip
{
    transpose(arr, row, col);
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < col; j++)
        {
            swap(arr[i][j], arr[row - 1 - i][j]);
        }
    }
}

void spiralTraversal(int arr[3][3], int row, int col) // amzone google microsoft etc...
{
    int top = 0;
    int bottom = row - 1;
    int left = 0;
    int right = col - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i]
                 << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        // if (top <= bottom)
        // {
        // cout << "a";
        for (int i = right; i >= left; i--)
        {
            // cout << "a";
            cout << arr[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            // cout << "a";
            cout << arr[i][left] << " ";
        }
        left++;
        // }
    }
}

void interchangingRow(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < col; j++)
        {
            swap(arr[i][j], arr[row - 1 - i][j]);
        }
        // cout << endl;
    }
}

void interchangingCol(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            swap(arr[i][j], arr[i][col - 1 - j]);
        }
        // cout << endl;
    }
}

bool linearSearch(int arr[3][3], int row, int col, int key)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

bool Search(int arr[3][3], int row, int col, int key) // if arr is sorted in incresing ordered
{
    int n = 0;
    for (int i = 0; i < row; i++)
    {
        if (arr[i][0] == key)
        {
            return true;
        }
        else if (arr[i][0] > key)
        {
            n = i - 1; // if intial cell mtlb arr[0][0]=3 and we have key 1 then n = -1 something ...
            break;
        }
        else
        {
            n = i;
        }
    }

    if (n >= 0)
    {
        for (int i = 0; i < col; i++)
        {
            if (arr[n][i] == key)
            {
                return true;
            }
        }
    }

    return false;
}

void printmat(int arr[3][3], int row, int col)
{
    int st = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // int arr[3][3] = {{4, 6, 1}, {8, 0, 5}, {12, 7, 9}};
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Simple Matrix:" << endl;
    printmat(arr, 3, 3);
    cout << endl;

    cout << Search(arr, 3, 3, 6) << endl;
    // cout << linearSearch(arr, 3, 3, 2) << endl;

    // cout << "interchanging col Matrix:" << endl;
    // interchangingCol(arr, 3, 3);
    // printmat(arr, 3, 3);
    // cout << endl;

    // cout << "interchanging row Matrix:" << endl;
    // interchangingRow(arr, 3, 3);
    // printmat(arr, 3, 3);
    // cout << endl;

    // cout << "Spiral Matrix:" << endl;
    // spiralTraversal(arr, 3, 3);
    // cout << endl;

    // cout << "Tanspose matrix:" << endl;
    // transpose(arr, 3, 3);
    // printmat(arr, 3, 3);

    // cout << "rotate matrix:" << endl;
    // rotate90degree(arr, 3, 3);
    // printmat(arr, 3, 3);

    // cout << endl  << lowerTriSum(arr, 3, 3) << endl;
    // cout << endl << upperTriSum(arr, 3, 3) << endl;
    // snakePattern(arr, 3, 3);
}