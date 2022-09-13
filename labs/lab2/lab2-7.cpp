#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr > max)
        {
            max = curr;
        }
    }
    cout << max;
    return 0;
}