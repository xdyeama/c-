#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    bool isTrue = 1;

    for (int i = 0; i < t.length(); i = i + s.length())
    {
        if (t.find(s, i) == string::npos)
        {
            isTrue = 0;
            break;
        }
    }
    if (isTrue == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}