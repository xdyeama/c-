#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, curr, k;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> k;
    vec.erase(vec.begin()+k);
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    return 0;
}