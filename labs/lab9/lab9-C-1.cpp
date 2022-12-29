#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int n, curr;
    cin >> n;
    queue<int> q;
    vector<int> v;
    vector<int> counts;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> curr;
        q.push(curr);
    }
    curr = q.front();
    q.pop();
    bool isPresent = false;
    v.push_back(curr);
    counts.push_back(1);
    while(!q.empty()){
        curr = q.front();
        q.pop();
        for(int i = 0; i < v.size(); i++){
            if(v[i] == curr){
                counts[i]++;
                isPresent = true;
            }
        }
        if(isPresent == false){
            v.push_back(curr);
            counts.push_back(1);
        }
        isPresent = false;
    }
    
    for(int i = 0; i < counts.size(); i++){
        if(counts[i] > 1){
            count++;
        }
    }
    cout << count;
    return 0;
}