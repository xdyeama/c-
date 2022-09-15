#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr;
    cin >> n;
    int arr[n][n];
    bool isEqual = 1;
    int sum = 0;
    int avg;
    int max = INT_MIN;
    int second_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> curr;
            arr[i][j] = curr;
            sum += curr;
            if (max < curr)
            {
                max = curr;
            }
        }
    }
    avg = (sum) / (double)(n * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != avg)
            {
                isEqual = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (second_max < arr[i][j] & arr[i][j] < max)
            {
                second_max = arr[i][j];
            }
        }
    }
    if (isEqual == 1)
    {
        second_max = 0;
    }
    cout << second_max;
    return 0;
}