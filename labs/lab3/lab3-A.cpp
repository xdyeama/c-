#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr % 2 == 1)
        {
            cout << curr << " ";
        }
    }

    return 0;
}