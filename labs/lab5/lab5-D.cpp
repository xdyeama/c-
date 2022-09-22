#include <bits/stdc++.h>

using namespace std;

string reverse(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        swap(s[i], s[s.length() - 1 - i]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    string rev = reverse(s);
    if (s == rev)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}