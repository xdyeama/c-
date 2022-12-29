#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct coords{
    int x;
    int y;
    double dist;
};

bool customComparator(coords l, coords r){
    return l.dist < r.dist;
}

int main(){
    coords initial, curr;
    cin >> initial.x >> initial.y;
    initial.dist = 0;
    int n, currX, currY, distance, diffx, diffy;
    cin >> n;
    vector<coords> v;
    for(int i = 0; i < n; i++){
        cin >> curr.x >> curr.y;
        diffx = curr.x - initial.x;
        diffy = curr.y - initial.y;
        curr.dist = sqrt(pow(diffx, 2) + pow(diffy, 2));
        v.push_back(curr);
    }
    sort(v.begin(), v.end(), customComparator);
    vector<coords>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        coords curr = *it;
        cout << curr.x << " " <<  curr.y << endl;
    }
    return 0;
}