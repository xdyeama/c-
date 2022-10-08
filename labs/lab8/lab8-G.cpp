#include <iostream>
#include <vector>

using namespace std;

int isPrime(int &it){
    for(int i = 2; i < it; i++){
        if(it % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n, curr, k, count = 0;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    cin >> k;
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        if(*it >= k){
            count += isPrime(*it);
        }
    }
    cout << count;
    return 0;
}