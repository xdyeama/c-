#include <iostream>

using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int curr;
    long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (i >= l - 1 & i <= r - 1)
        {
            sum += curr;
        }
    }

    cout << sum;

    return 0;
}