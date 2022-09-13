#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr > 0)
        {
            ++count;
        }
    }
    cout << count;

    return 0;
}