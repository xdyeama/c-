#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    map<char, int> m1;
    map<char, int> m2;
    bool isNearlyEqual = 1;
    for_each(s.begin(), s.end(), [&m1](char &ch)
             { m1[ch]++; });
    for_each(t.begin(), t.end(), [&m2](char &ch)
             { m2[ch]++; });

    for (auto it = m1.begin(); it != m1.end(); ++it)
    {
        char key = it->first;
        if (m1[key] != m2[key])
        {
            isNearlyEqual = 0;
        }
    }
    if (isNearlyEqual == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}