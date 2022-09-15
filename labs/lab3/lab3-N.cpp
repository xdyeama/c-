#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(pow(curr, 2));
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}