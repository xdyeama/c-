#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char currChar = s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)currChar < (int)s[i])
        {
            currChar = s[i];
        }
    }
    cout << currChar;

    return 0;
}