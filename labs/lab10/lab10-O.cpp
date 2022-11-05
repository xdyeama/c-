#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

void toBinary (int a){
        unsigned long long bit = 0;
        unsigned long long i = 0;
        queue<unsigned long long> q;
        while(a > 0){
            q.push(a%2);
            a /= 2;
        }
        while(!q.empty()){
            bit += q.front() * pow(10, i);
            q.pop();
            i++;
        }       
        cout << bit << endl;
};

int main(){
    int n, curr;
    cin >> n;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> curr;
        v.push_back(curr);
    }
    for_each(v.begin(), v.end(), toBinary);
    return 0;
}