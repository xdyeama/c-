// Problem D. K-bonnaci
// Input file: standard input
// Output file: standard output
// Time limit: 1 second
// Memory limit: 256 megabytes
// k-bonacci sequence given as follows ai = ai−2 + k · ai−1, where a1 = 0 and a2 = 1. You’re given numbers
// k and m. Print the last digit of m-th term of k-bonacci sequence. SOLVE ONLY USING RECURSION!
// Input
// The only line of the input contains integer numbers k and m (1 ≤ k ≤ 106
// , 1 ≤ m ≤ 32).
// Output
// Print the last digit of m-th term k-bonacci sequence.
#include <iostream>

using namespace std;

unsigned long long kBonnaci(int k, int m){
    if(m == 1){
        return 0;
    }
    if(m == 2){
        return 1 + k * kBonnaci(k, m - 1);
    }
    return kBonnaci(k, m-2) + k * kBonnaci(k, m - 1);
}

int main(){
    int k, m;
    cin >> k >> m;
    unsigned long long res = kBonnaci(k, m);
    res = res % 10;
    cout << res;
    return 0;
}