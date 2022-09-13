#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int curr;
    vector<int> nums;
    int min = INT_MAX;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
        if (min > curr)
        {
            min = curr;
        }
        if (max < curr)
        {
            max = curr;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == max)
        {
            nums[i] = min;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}