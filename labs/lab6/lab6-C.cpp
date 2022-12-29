#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int min(int a, int b){
    if(a <= b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int n, curr, count = 0;
    cin >> n;
    vector<int> vec1;
    vector<int> vec2;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec1.push_back(curr);
    }
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec2.push_back(curr);
    }
    map<int, int> map1;
    map<int, int> map2;
    for(int i = 0; i < vec1.size(); i++){
        map1[vec1[i]]++;
    }
    for(int i = 0; i < vec2.size(); i++){
        map2[vec2[i]]++;
    }

    for(auto it1 = map1.begin(); it1 != map1.end(); ++it1){
        int par1 = it1 -> first;
        int value1 = it1 -> second;
        for(auto it2 = map2.begin(); it2 != map2.end(); ++it2){
            int par2 = it2 -> first;
            int value2 = it2 -> second;
            if(par1 == par2){
                count += min(value1, value2);
            }
        }
    }
    cout << count;


    return 0;
}

