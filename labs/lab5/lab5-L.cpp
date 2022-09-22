#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char ch;
    bool isAsec = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if ((int)s[i] > (int)s[i + 1])
        {
            isAsec = 0;
        }
    }
    if (isAsec == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}