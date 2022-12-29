// Problem E. Formula
// Input file: standard input
// Output file: standard output
// Time limit: 1 second
// Memory limit: 256 megabytes
// All week Temirlan was preparing for the World Programming Championship and forgot to prepare
// problems for the quiz. He quickly decided to compose it. He decided to give a simple problem. Given
// a function F(x) = n + F(g). Where, x - is the given integer number, n - is the divisors count of x, g - is
// the largest divisor of the x. For this function, we have one rule: F(1) = 1;
// Input
// You are given one integer number - x.
// Output
// You need to find the result of the function F(x) = n + F(g).
#include <iostream>

using namespace std;

int f(int x){
    if(x == 1){
        return 1;
    }
    int n = 0;
    int g;
    for(int i = 1; i < x; i++){
        if(x % i == 0){
            n++;
            g = i;
        }
    }
    return n + f(g);
}

int main(){
    int x;
    cin >> x;
    cout << f(x);

    return 0;
}