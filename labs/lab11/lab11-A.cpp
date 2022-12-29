#include <iostream>
#include <cmath>

using namespace std;

class Weekday{
    public:
        string currDay;
        string weekdays[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
        Weekday(string day){
            currDay = day;
        }
        int howLongToSun(){
            for(int i = 0; i < 7; i++){
                if(weekdays[i] == currDay){
                    if(i == 0){
                        return 7;
                    }
                    return 7-i;
                }
            }
        }
};

int main(){
    string s;
    cin >> s;
    Weekday A(s);
    cout << A.howLongToSun();
    return 0;
}