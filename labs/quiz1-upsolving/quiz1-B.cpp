#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums;
    int curr, max, i;
    for(i = 0; i < 3; i++){
        cin >> curr;
        nums.push_back(curr);
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }


    return 0;
}