#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double findGirlsPercentage(int n, int m){
    return (double) m/n * 100;

}

int main(){
    int n, m;
    cin >> n >> m;
    double girlsPercentage = findGirlsPercentage(n, m);
    cout << girlsPercentage;
    return 0;
}