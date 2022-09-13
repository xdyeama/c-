#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int binary_search(vector<int> arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int middle = floor((left + right) / 2.0);

    while (arr[middle] != target & left <= right)
    {
        if (target < arr[middle])
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
        middle = floor((left + right) / 2.0);
    }
    if (arr[middle] == target)
    {
        return middle;
    }
    else
    {
        return middle + 1;
    }
}

int main()
{
    int n, target;
    cin >> n >> target;
    int curr;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
    }
    int index = binary_search(nums, target);
    cout << index;
    return 0;
}