#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, curr, ind, value;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> ind >> value;
    vec.insert(vec.begin() + ind, value);
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    return 0;
}