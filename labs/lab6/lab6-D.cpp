#include <iostream>
#include <array>


using namespace std;
int main(){
    int n, curr, x;
    cin >> n;
    int arr[n];
    bool isPresent = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;

    for(int i = 0; i < n;i++){
        if(arr[i] == x){
            isPresent = 1;
        }
    }
    if(isPresent == 0){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}