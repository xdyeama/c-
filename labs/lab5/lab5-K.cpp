#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> m;
    int vowelSum = 0;
    char vowels[5] = {'a', 'o', 'e', 'i', 'u'};
    for_each(s.begin(), s.end(), [&m](char &ch)
             { m[ch]++; });
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        char key = it->first;
        int value = it->second;
        for (int i = 0; i < sizeof(vowels); i++)
        {
            if ((int)key == (int)vowels[i])
            {
                vowelSum += value;
            }
        }
    }
    cout << vowelSum;
    return 0;
}