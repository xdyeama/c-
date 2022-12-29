#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

long long double powers(){
    static long long i;
    if(i == 0){
        return ++i;
    }
    long long a = i++;
    return powl(a, a);
}

int main(){
    int n;
    cin >> n;
    vector<long double> v(n+1);
    generate(v.begin(), v.end(), powers);
    vector<long double>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << setprecision(0) << *it << " ";
    }
    return 0;
}