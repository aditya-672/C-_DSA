// Write the code to traverse a matrix in a spiral format.

#include <iostream>

using namespace std;

int main()
{
    // int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for right direction row
        for (int i = column_start; i <= column_end; i++)
        {
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;

        // for down direction column
        for (int i = row_start; i <= row_end; i++)
        {
            cout<<arr[i][column_end]<<" ";
        }
        column_end--;

        //for left direction row
        for (int i = column_end; i >= column_start; i--)
        {
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        //for up direction column
        for (int i = row_end; i >= row_start ; i--)
        {
            cout<<arr[i][column_start]<<" ";
        }
        column_start++;
    }

    return 0;
}