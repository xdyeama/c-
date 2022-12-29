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
            return x1 == x2 == x3 == x4;
        }
};

struct square{
    int x1;
    int x2;
    int x3;
    int x4;
};

bool isCool(square sq){
    return sq.x1 == sq.x2 & sq.x2 == sq.x3 && sq.x3 == sq.x4;
}

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
            square sq;
            sq.x1 = arr[i-1][j-1];
            sq.x2 = arr[i-1][j];
            sq.x3 = arr[i][j-1];
            sq.x4 = arr[i][j];
            if(isCool(sq) == false){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}