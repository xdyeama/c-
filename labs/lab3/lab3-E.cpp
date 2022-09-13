#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long sum = 0;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        sum += curr;
    }

    cout << sum;

    return 0;
}