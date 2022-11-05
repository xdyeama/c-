#include <iostream>
#include <algorithm>
#include <map>

typedef std::pair<std::string, int> custom_pair; 

int main(){
    int n, score1, score2;
    std::cin >> n;
    std::string name1, name2;
    std::multimap<custom_pair, custom_pair> map1;
    std::multimap<std::string, int> finalMap;
    for(int i = 0; i < n; i++){
        std::cin >> name1 >> score1 >> name2 >> score2; 
        custom_pair key = std::make_pair(name1, score1);
        custom_pair value = std::make_pair(name2, score2);
        map1.insert(std::pair<custom_pair, custom_pair>(key, value));
    }
    std::multimap<custom_pair, custom_pair>::iterator it;
    std::multimap<custom_pair, custom_pair>::iterator it1;
    std::multimap<custom_pair, custom_pair>::iterator end = map1.end();
    std::advance(end, -1);
    /*
    bool isDuplicate = 0;
    for(it = map1.begin(); it != end; it++){
        std::pair<custom_pair, custom_pair> pair1 = *it;
        custom_pair cont11 = pair1.first;
        custom_pair cont12 = pair1.second;
        std::string team1 = cont11.first + " and " + cont12.first;
        int totalScore1 = cont11.second + cont12.second;
        for(it1 = std::next(it); it1 != map1.end(); it1++){
            std::pair<custom_pair, custom_pair> pair2 = *it1;
            custom_pair cont21 = pair2.first;
            custom_pair cont22 = pair2.second;
            std::string team2 = cont11.first + " and " + cont12.first;
            int totalScore2 = cont11.second + cont12.second;
            if(cont11 == cont21 && cont12 == cont21){
                if(finalMap.count(team1) == 0){
                    finalMap.insert(std::make_pair(team1, totalScore1));
                    break;
                }
            }
            finalMap.insert(std::make_pair(team1, totalScore1));
        }
    }
    */
   for(it = map1.begin(); it != map1.end(); it++){
        std::pair<custom_pair, custom_pair> currPair = *it;
        custom_pair cont1 = currPair.first;
        custom_pair cont2 = currPair.second;
        std::string team = cont1.first + " and " + cont2.first;
        int totalScore = cont1.second + cont2.second;
        if(finalMap.count(team) == 0){
            finalMap.insert(std::make_pair(team, totalScore));
        }else{
            if((finalMap.find(team) -> second) != totalScore){
                finalMap.insert(std::make_pair(team, totalScore));
            }
        }

   }
    std::multimap<std::string, int>::iterator itr;
    for(itr = finalMap.begin(); itr != finalMap.end(); itr++){
        std::pair<std::string, int> curr = *itr;
        std::cout << curr.first << " " << curr.second << std::endl;
    }

    return 0;
}