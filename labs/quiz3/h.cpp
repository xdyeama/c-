#include <iostream>
#include <vector>

using namespace std;

double getPriceQualityRatio(int p, int q){
    return (double)q/p;
}

int main(){
    int n;
    cin >> n;
    string phone;
    int p, q;
    vector<pair<string, double> > v;
    double maxQuality = 0.0;
    int maxIndex = 0;
    for(int i = 0; i < n; i++){
        cin >> phone >> p >> q;
        if(maxQuality < getPriceQualityRatio(p, q)){
            maxQuality = getPriceQualityRatio(p, q);
            maxIndex = i;
        }
        v.push_back(make_pair(phone, getPriceQualityRatio(p, q)));
    }
    cout << v[maxIndex].first;
    return 0;
}