#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int curr = 0;
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    while (left < right + 1 && top < bottom + 1)
    {
        // from left to right
        for (int i = left; i < right + 1; i++)
        {
            curr++;
            arr[top][i] = curr;
        }
        ++top;
        // from top to bottom
        for (int i = top; i < bottom + 1; i++)
        {
            curr++;
            arr[i][right] = curr;
        }
        --right;
        // from right to left
        for (int i = right; i > left - 1; i--)
        {
            curr++;
            arr[bottom][i] = curr;
        }
        --bottom;
        // from bottom to top
        for (int i = bottom; i > top - 1; i--)
        {
            curr++;
            arr[i][left] = curr;
        }
        ++left;
    }

    // if (sizeof(arr) < n)
    // {
    //     for (int i = top; i < bottom + 1; i++)
    //     {
    //         for (int j = left; j < right + 1; j++)
    //         {
    //             arr[i][j] = curr;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}