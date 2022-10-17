#include <iostream>
#include <queue>
#include <vector>

template<typename T>
T min(T a, T b){
    if(a > b){
        return b;
    }
    return a;
}


int main(){
    int n, minHeight = 0, currHeight = 0, prevHeight = 0, maxArea = 0, currArea = 0;
    std::cin >> n;
    std::queue<int> q1;
    std::queue<int> q2;
    std::queue<int> areas;
    for(int i = 0; i < n; i++){
        std::cin >> currHeight;
        q1.push(currHeight);
    }
    minHeight = q1.front();
    q1.pop();
    q2 = q1;
    q2.pop();
    prevHeight = q1.front();
    minHeight = min(minHeight, prevHeight);
    currArea += minHeight;
    while(!q2.empty()){
        currHeight = q2.front();
        prevHeight = q1.front();
        if(prevHeight > minHeight){
            if(currHeight <= minHeight){
                currArea += minHeight;
            }else{
                areas.push(currArea);
                minHeight = min(prevHeight, currHeight);
                currArea = minHeight;
            }
        }else if(prevHeight == minHeight){
            currArea += minHeight;
        }else{
            areas.push(currArea);
            minHeight = prevHeight;
            currArea = minHeight;
        }
        q1.pop();
        q2.pop();
    }
    prevHeight = currHeight;
    currHeight = q1.front();
    if(prevHeight > minHeight){
        if(currHeight <= minHeight){
            currArea += minHeight;
        }else{
            areas.push(currArea);
            minHeight = min(prevHeight, currHeight);
            currArea = minHeight;
        }
    }else if(prevHeight == minHeight){
        currArea += minHeight;
    }else{
        areas.push(currArea);
        minHeight = prevHeight;
        currArea = minHeight;
        areas.push(currArea);
    }
    while(!areas.empty()){
        currArea = areas.front();
        if(currArea > maxArea){
            maxArea = currArea;
        }
        areas.pop();
    }
    std::cout << maxArea;

    return 0;
}