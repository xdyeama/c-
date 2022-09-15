#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string message = "Yes";
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            message = "No";
        }
    }
    cout << message;
    return 0;
}