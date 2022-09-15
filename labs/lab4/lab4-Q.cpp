#include <bits/stdc++.h>

using namespace std;

/*
.....*.....
....***....
...*****...
..*******..
.*********.
***********
*/

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int m = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        int numStars = 2 * i + 1;
        int numDots = (m - numStars) / 2;
        for (int j = 0; j < numDots; j++)
        {
            cout << ".";
        }
        for (int j = 0; j < numStars; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < numDots; j++)
        {
            cout << ".";
        }
        cout << endl;
    }

    return 0;
}