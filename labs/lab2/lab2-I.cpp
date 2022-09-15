#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr % 10 == 7)
        {

            ++count;
        }
    }
    cout << count;
    return 0;
}