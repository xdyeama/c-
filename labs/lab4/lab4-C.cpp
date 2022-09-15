#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, curr;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> curr;
            if (curr < 0)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}