#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> squares;

    for (int i = 1; pow(i, 2) <= n; i++)
    {
        float square = pow(i, 2);
        if (square == floor(square))
        {
            squares.push_back(square);
        }
    }
    for (int i = 0; i < squares.size(); i++)
    {
        cout << squares[i] << endl;
    }

    return 0;
}