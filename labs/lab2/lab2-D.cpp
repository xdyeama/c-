#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int time = 0;
    while (n > 0)
    {
        if ((n % k == 1) & (n / k == 0) & (time > 0))
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
        n -= k;
    }
    cout << time << endl;
    return 0;
}