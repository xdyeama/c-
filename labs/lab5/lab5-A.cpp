#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ch;
    int chCode;
    int countCap = 0;
    int countSmall = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        chCode = (int)ch;
        if (chCode >= 65 && chCode <= 90)
        {
            countCap += 1;
        }
        else
        {
            countSmall += 1;
        }
    }

    cout << countSmall << " " << countCap;

    return 0;
}