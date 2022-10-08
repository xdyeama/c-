#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n, curr;
    cin >> n;
    vector<int> vec;

    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    sort(vec.begin(), vec.end());
    cout << abs(vec[0] - vec[vec.size()-1]);

    return 0;
}