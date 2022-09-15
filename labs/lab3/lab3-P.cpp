#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double square = sqrt(n);
    if ((square == (int)square) == 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}