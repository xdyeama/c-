#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double getHypo(int a, int b){
    double hypo =  sqrt(pow(a, 2) + pow(b, 2));
    return hypo;
}

int main(){
    int a, b;
    cin >> a >> b;
    double res = getHypo(a, b);
    cout << setprecision(4) << res;
    return 0;
}