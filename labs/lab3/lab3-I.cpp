#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int curr;
    vector<int> nums;
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
        if (i >= l - 1 & i <= r - 1)
        {
            temp.push_back(curr);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        nums[l - 1 + i] = temp[temp.size() - 1 - i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}