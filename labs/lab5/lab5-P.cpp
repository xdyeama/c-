#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char currChar;
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] == 122)
        {
            s[i] = (char)97;
        }
        else
        {
            s[i] = (char)((int)s[i] + 1);
        }
    }

    cout << s;
    return 0;
}