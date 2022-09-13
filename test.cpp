#include <iostream>
#include <string>
#include <tgmath.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> nums;
    for (double num; cin >> num;)
    {
        nums.push_back(num);
    }
    double sum;
    for (double num : nums)
    {
        sum += num;
    }

    cout << "Total number of entries: " << nums.size() << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / nums.size() << endl;

    sort(nums.begin(), nums.end());
    for (double num : nums)
    {
        cout << "num " << num << endl;
    }
    double median;
    if(nums.size() % 2 == 0){
        median = (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2;
    }else{
        median = nums[nums.size() / 2];
    }
    cout << "Median: " << median << endl;

        return 0;
}