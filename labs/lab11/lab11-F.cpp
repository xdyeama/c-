#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class KthDivisor{
    public:
        int a, b;
        KthDivisor(int x, int y){
            a = x;
            b = y;
        }
        int getKthDivisor(int k){
            int count = 0;
            for(int i = min(a,b); i >= 1; i--){
                if((a % i == 0) && (b % i == 0)){
                    count++;
                }
                if(count == k){
                    return i;
                }
            }
        }
    
};

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    KthDivisor kdiv = KthDivisor(a, b);
    cout << kdiv.getKthDivisor(k);
    return 0;
}