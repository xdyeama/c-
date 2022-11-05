#include <iostream>

using namespace std;

int main(){
    int n1, n2, n5, n10, n20, n50, n100;
    cin >> n1 >> n2 >> n5 >> n10 >> n20 >> n50 >> n100;
    int n, ch, r;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> ch;
        if( ch / 100 <= n100){
            r = ch % 100;
            n100 -= ch/100;
            r = 
        }else{
            if(ch / 50 <= n50){

            }
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cout << "Transaction stopped!" << endl;
        }else{
            cout << "Transaction accepted!" << endl;
        }
    }

    return 0;
}