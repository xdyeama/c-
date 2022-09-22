#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> numMap;
    bool isEqualCount = 1;
    int prevCount;
    for_each(s.begin(), s.end(), [&numMap](char &ch)
             { numMap[ch]++; });
    prevCount = numMap[s[0]];

    for (auto it = numMap.begin(); it != numMap.end(); ++it)
    {
        char value = it->second;
        if (prevCount != value)
        {
            isEqualCount = 0;
        }
    }
    if (isEqualCount == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}