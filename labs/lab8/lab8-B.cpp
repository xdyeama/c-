#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, curr;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    for(auto it=vec.rbegin(); it != vec.rend(); it++){
        cout << *it << " ";
    }

    return 0;
}