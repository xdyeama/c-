#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sumOdd = 0;
    int sumEven = 0;
    int num;
    for (int i = 0; i < s.length(); i++)
    {
        num = (int)s[i] - 48;
        if (i == 0 || i % 2 == 0)
        {
            sumEven += num;
        }
        else
        {
            sumOdd += num;
        }
    }
    if (sumOdd == sumEven)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}