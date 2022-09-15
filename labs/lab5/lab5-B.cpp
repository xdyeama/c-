#include <bits/stdc++.h>

using namespace std;

int main()
{
    string inpString;
    cin >> inpString;
    char ch;
    int chCode;

    for (int i = 0; i < inpString.length(); i++)
    {
        ch = inpString[i];
        chCode = (int)ch;
        if (chCode >= 97 && chCode <= 122)
        {
            chCode -= 32;
            ch = (char)chCode;
            inpString[i] = ch;
        }
    }

    cout << inpString;
    return 0;
}