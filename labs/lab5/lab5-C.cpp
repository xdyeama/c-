#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    bool isFound = 1;

    if (s.find(t) == -1)
    {
        isFound = 0;
    }

    if (isFound == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}