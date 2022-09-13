#include <iostream>

using namespace std;

int main()
{
    int v, t, dist, k;
    cin >> v >> t;
    int res = ((109 + v * t % 109) % 109);
    cout << res;
    return 0;
}