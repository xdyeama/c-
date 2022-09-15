#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count;
    cin >> n;
    count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == (n - i - 1))
            {
                cout << count;
            }
            else
            {
                cout << ".";
            }
        }
        count++;
        cout << "\n";
    }

    return 0;
}