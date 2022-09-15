#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, curr, sum, minSum, minIndex;
    cin >> n >> m;
    sum = 0;
    minSum = INT_MAX;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> curr;
            sum += curr;
        }
        arr[i] = sum;
        sum = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minSum)
        {
            minIndex = i;
            minSum = arr[i];
        }
    }
    cout << minIndex + 1;
}