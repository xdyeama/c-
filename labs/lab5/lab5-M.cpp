#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char c;
    int n;
    cin >> s >> c >> n;
    map<char, int> m;
    bool isTrue = 1;
    for_each(s.begin(), s.end(), [&m](char &ch)
             { m[ch]++; });
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        char key = it->first;
        int value = it->second;
        if (((int)key == (int)c) && (value != n))
        {
            isTrue = 0;
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