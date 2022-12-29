#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct class_member{
    string name;
    int score;
};

struct class_percentage{
    string name;
    double percentage;
};

bool custom_comparator(class_percentage l, class_percentage r){
    if(l.percentage == r.percentage){
        return l.name > r.name;
    }
    return l.percentage > r.percentage;
}


int main(){
    int n, currScore, totalScore = 0;
    string name;
    bool isDuplicate = false;
    cin >> n;
    vector<class_member> v;
    vector<class_member>::iterator it;
    cin >> name >> currScore;
    class_member cm;
    cm.name = name;
    cm.score = currScore;
    totalScore += currScore;
    v.push_back(cm);
    for(int i = 0; i < n-1; i++){
        cin >> name >> currScore;
        totalScore += currScore;
        cm.name = name;
        cm.score = currScore;
        for(it = v.begin(); it != v.end(); it++){
            if(it -> name == cm.name){
                isDuplicate = true;
                it -> score += cm.score;
            }
        }
        if(isDuplicate == false){
            v.push_back(cm);
        }
        isDuplicate = false;
    }
    vector<class_percentage> v1;
    for(it = v.begin(); it != v.end(); it++){
        class_percentage cp;
        cp.name = it -> name;
        cp.percentage = double(it -> score)/double(totalScore) * 100;
        v1.push_back(cp);
    }
    sort(v1.begin(), v1.end(), custom_comparator);
    vector<class_percentage>::iterator it1;
    for(it1 = v1.begin(); it1 != v1.end(); it1++){
        cout << it1 -> name << " " << it1 -> percentage << "%" << endl;
    }
    return 0;
}