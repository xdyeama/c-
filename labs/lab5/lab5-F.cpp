#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int l, r;
    cin >> s >> l >> r;
    string outputString = s.substr(l, r - l + 1);
    cout << outputString;
    return 0;
}