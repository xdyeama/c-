#include <iostream>
#include <vector>


using namespace std;

long long int findSum(vector<long long int> vec, long long int size, long long int i){
    if(vec[i] == 0){
        return 0;
    }
    return vec[i] + findSum(vec, size, i+1);
}

int main(){
    vector<long long int> vec;
    long long int curr;

    while(cin >> curr){
        vec.push_back(curr);
    }
    long long int sum = findSum(vec, vec.size(), 0);
    cout << sum;

    return 0;
}