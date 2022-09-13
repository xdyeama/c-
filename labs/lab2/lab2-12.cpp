#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> twoSquares;
    for (int i = 0; pow(2, i) <= n; i++)
    {
        twoSquares.push_back(pow(2, i));
    }
    for (int i = 0; i < twoSquares.size(); i++)
    {
        cout << twoSquares[i] << " ";
    }
    return 0;
}