#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> curr;
            if (j == n - 1 - i)
            {
                arr[i] = curr;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}