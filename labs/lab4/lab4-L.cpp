#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, curr;
    cin >> n >> m;
    int arr[n][m];
    int min = INT_MAX;
    int minRow;
    int mins[m];
    int rowIds[m];
    int colIds[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> curr;
            arr[i][j] = curr;
        }
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minRow = i;
            }
        }
        mins[j] = min;
        rowIds[j] = minRow + 1;
        colIds[j] = j + 1;
        min = INT_MAX;
    }
    cout << "coordinates of min elements:" << endl;
    for (int j = 0; j < m; j++)
    {
        cout << rowIds[j] << ";" << colIds[j] << endl;
    }
    cout << endl;
    int sum = 0;
    for (int j = 0; j < m; j++)
    {
        sum += mins[j];
    }
    cout
        << "Their sum:\n"
        << sum;
    return 0;
}