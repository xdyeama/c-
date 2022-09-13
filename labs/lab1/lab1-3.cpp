#include <iostream>
#include <bitset>

using namespace std;

/*
    12 1100
*/
int main()
{
    int inp;
    cin >> inp;
    int res;
    while (inp > 0)
    {
        res = res << 1;

        if (inp & 1 == 1)
        {
            res = res ^ 1;
        }
        inp = inp >> 1;
    }

    cout << res;

    return 0;
}