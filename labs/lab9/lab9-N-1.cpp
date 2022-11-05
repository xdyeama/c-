#include <iostream>

int main(){
    long long n, count = 0;
    std::cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            for(int k = 0; k < n; k++){
                if(arr[k] == (arr[i] ^ arr[j])){
                    count++;
                    break;
                }
            }
        }

    }
    std::cout << count;
    return 0;
}