#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    map<int, int> duplicates;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        nums.push_back(curr);
    }
    for (int i = 0; i < nums.size(); i++)
    {

        if (duplicates[nums[i]] == nums[i])
        {
            nums.erase(nums.begin() + i);
            cout << "duplicate " << nums[i];
        }
        else
        {
            duplicates.insert(pair<int, int>(nums[i], nums[i]));
        }
    }
    map<int, int>::iterator it;
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}