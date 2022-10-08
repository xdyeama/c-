#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, curr, a, b;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> a >> b;
    vec.erase(vec.begin() + a, vec.begin() + b + 1);
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }

    return 0;
}