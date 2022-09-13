#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int curr;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
    }
    for (int i = n; i > 0; i--)
    {
        cout << nums[i - 1] << " ";
    }

    return 0;
}