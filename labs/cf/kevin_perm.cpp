#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n, currDif=1000, k = 0, maxDiff = 0, maxIndex = 0;
    cin >> n;
    int ns[n];
    int diffs[n];
    for(int i = 0; i < n; i++){
        cin >> ns[i];
    }
    vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(i);
    }
    
    do{
        for(int i = 1; i <= n; i++){
            currDif = min(abs(v[i] - v[i-1]), currDif);
        }
        diffs[k] = currDif;
        k++;
        currDif = 1000;
    }while(next_permutation(v.begin(), v.end()));
    for(int i = 0; i < n; i++){
        if(diffs[i] > maxDiff){
            maxDiff = diffs[i];
            maxIndex = i;
        }
    }
    k = 0;
    do{
        if(k == maxIndex){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
        }
    }while(next_permutation(v.begin(), v.end()));

    return 0;
}