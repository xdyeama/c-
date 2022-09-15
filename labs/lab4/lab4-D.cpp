#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                cout << i * 1 << " ";
            }
            else
            {
                cout << i * j << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}