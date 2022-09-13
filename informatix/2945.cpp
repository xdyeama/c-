#include <iostream>
#include <bitset>

using namespace std;
/*
7: 0111
8: 1010


*/

int main()
{
    int n;
    cin >> n;
    cout << n + 2 - (n % 2);
    return 0;
}