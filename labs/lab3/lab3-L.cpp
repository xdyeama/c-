#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    int curr;
    vector<int> vec;
    for (int i = 0; i < n1; i++)
    {
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> curr;
        vec.push_back(curr);
    }

    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}