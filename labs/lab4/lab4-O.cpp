#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr, x, y;
    cin >> n;
    int diagNums[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> curr;
            if (i == j)
            {
                diagNums[i] = curr;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (diagNums[i] > max)
        {
            max = diagNums[i];
            x = i;
            y = i;
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << x + 1 << ";" << y + 1;

    return 0;
}