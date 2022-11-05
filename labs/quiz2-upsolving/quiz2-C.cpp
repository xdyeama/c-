#include <iostream>


using namespace std;

int main(){
    int n, w, h, x1, x2, y1, y2;
    cin >> w >> h >> n;
    int canv[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            canv[i][j] = 0;
        }
    }
    for(int k = 0; k < n; k++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(i > y1 && i <= y2 && j > x1 && j <= x2){
                    canv[i][j]++; 
                }
            }
        }
    }
    int sumArea = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(canv[i][j] == 0){
                sumArea++;
            }
        }
    }
    cout << sumArea;
    return 0;
}