#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, curr, rowSum, colSum;
    cin >> n >> m;
    rowSum = 0;
    colSum = 0;
    int rowSums[n];
    int colSums[m];
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> curr;
            rowSum += curr;
            arr[i][j] = curr;
        }
        rowSums[i] = rowSum;
        rowSum = 0;
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            colSum += arr[i][j];
        }
        colSums[j] = colSum;
        colSum = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The sum of row number " << i + 1 << " is " << rowSums[i] << endl;
    }
    for (int j = 0; j < m; j++)
    {
        cout << "The sum of column number " << j + 1 << " is " << colSums[j] << endl;
    }

    return 0;
}