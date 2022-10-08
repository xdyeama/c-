#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k, curr;
    bool isFound = 0;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> k;
    for(auto it=vec.begin(); it != vec.end(); it++){
        if(*it == k){
            isFound = 1;
        }
    }
    if(isFound == 1){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}