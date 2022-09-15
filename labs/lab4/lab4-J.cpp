#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, curr;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> curr;
            if (((i + j) % 2 == 0) || (i + j) == 0)
            {
                arr[i][j] = curr + 1;
            }
            else
            {
                arr[i][j] = curr - 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}