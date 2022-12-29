#include <iostream>

using namespace std;

int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int gcd(int a, int b){
    int max = 1;
    int n = min(a, b);
    for(int i = 2; i <= n; i++){
        if(a % i == 0 && b % i == 0){
            if(i > max){
                max = i;
            }
        }
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(gcd(arr[i], arr[j]) > max){
                max = gcd(arr[i], arr[j]);
            }
        }
    }
    cout << max;
    return 0;
}