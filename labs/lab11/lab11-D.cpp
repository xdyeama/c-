#include <iostream>

using namespace std;

class Square{
    public:
        int x1, x2, x3, x4;
        Square(int a,int b,int c,int d){
            x1 = a;
            x2 = b;
            x3 = c;
            x4 = d;
        }
        bool isCool(){
            return (x1 + x2 + x3 + x4 != 4) && (x1 + x2 + x3 + x4 != 0) ;
        }
};

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            Square sq(arr[i-1][j-1], arr[i-1][j], arr[i][j-1], arr[i][j]);
            if(sq.isCool() == false){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}