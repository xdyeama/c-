#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, curr;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> k;
    sort(vec.begin(), vec.end());
    for(int i = 0; i < k; i++){
        cout << vec[i] << " ";
    }

    return 0;
}