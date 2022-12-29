#include <iostream>
#include <vector>

using namespace std;


int main(){ 
    int n;
    string curr;
    cin >> n;
    vector<string> names;
    for(int i = 0; i < n; i++){
        cin >> curr;
        names.push_back(curr);
    }
    vector<string> cheaters;
    vector<int> distances;
    // vector<string>::iterator it;
    // vector<int>::iterator it1;
    for(int i = 0; i < names.size() - 1; i++){
        for(int j = i; j < names.size(); j++){
            if(names[i] == names[j]){
                cheaters.push_back(names[i]);
                distances.push_back(j - i);
            }
        }
    }

    int minDistance = 100;
    int index = 0;
    string cheater;
    while(cheaters.size() > 0){
        for(int i = 0; i < distances.size(); i++){
            if(minDistance > distances[i]){
                minDistance = distances[i];
                index = i;
            }
        }
        cheater = cheaters[index];
        cout << cheater;
        cheaters.erase(cheaters.begin() + index);
        distances.erase(distances.begin() + index);
        index = 0;
        minDistance = 100;
    }

    return 0;
}