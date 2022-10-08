#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, curr, l, r;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> l >> r;
    reverse(vec.begin() + l, vec.begin() + r+1);
    for(int i: vec){
        cout << i << " ";
    }

    return 0;
}