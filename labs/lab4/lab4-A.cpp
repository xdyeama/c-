#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr;
    cin >> n;
    int arr[n][n];
    int max = -1000000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> curr;
            if (max < curr)
            {
                max = curr;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (max < arr[i][j])
    //         {
    //             max = arr[i][j];
    //         }
    //     }
    // }
    cout << max;
    return 0;
}