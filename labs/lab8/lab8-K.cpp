#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, curr, k, sum = 0;
    vector<int> vec;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> k;
    sort(vec.begin(), vec.end());
    int i = 0;
    cout << endl;
    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        if(i < k){
            sum += *it;
        }
        i++;
    }
    cout << sum;
    return 0;
}