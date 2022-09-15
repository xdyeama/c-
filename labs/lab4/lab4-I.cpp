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
            arr[i][j] = curr;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (sqrt((double)arr[i][j]) == (int)sqrt(arr[i][j]))
            {
                cout << (int)sqrt(arr[i][j]) << " ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}