#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool customComparator(int l, int r){
    return l > r;
}

int main(){
    int n, curr, mode = 0, maxMode = 0;
    cin >> n;
    map<int, int> m;
    int nums[n];
    vector<int> modes;
    for(int i = 0; i < n; i++){
        cin >> curr;
        nums[i] = curr;
        m[curr]++;
    }
    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(maxMode < it -> second){
            maxMode = it -> second;
        }
    }
    for(it = m.begin(); it != m.end(); it++){
        if(it -> second == maxMode){
            modes.push_back(it -> first);
        }
    }
    reverse(modes.begin(), modes.end());
    sort(nums, nums + n, customComparator);
    if(maxMode == 1){
        for(int i = 0; i < n; i++){
            cout << nums[i] << " ";
        }
        return 0;
    }
    vector<int>::iterator it1;
    for(it1 = modes.begin(); it1 != modes.end(); it1++){
        cout << *it1 << " ";
    }

    return 0;
}