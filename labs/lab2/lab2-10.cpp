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
        while (curr > 0)
        {
            if (curr % 10 == 0)
            {
                count++;
            }
            curr /= 10;
        }
    }
    cout << count;
    return 0;
}