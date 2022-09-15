#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nEvens = 0;
    int nOdds = 0;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr % 2 == 0)
        {
            ++nEvens;
        }
        else
        {
            ++nOdds;
        }
    }
    cout << nEvens << " " << nOdds;
    return 0;
}