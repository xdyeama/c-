#include <iostream>
#include <stack>
#include <vector>

using namespace std;


// Function to find largest rectangular area possible in a
// given histogram.
int maxArea(vector<int> vec){
    stack<int> indexStack;
    // we push -1 to the stack because for some elements
    // there will be no previous smaller element in the
    // array and we can store -1 as the index for previous
    // smaller.
    indexStack.push(-1);
    int maxArea = vec[0];
    int size = vec.size();
    int i = 0;
    // We declare left_smaller and right_smaller array of
    // size n and initialize them with -1 and n as their
    // default value. left_smaller[i] will store the index
    // of previous smaller element for ith element of the
    // array. right_smaller[i] will store the index of next
    // smaller element for ith element of the array.
    vector<int> left(size, -1), right(size, size);

    while(i < size){
        while(!indexStack.empty() && indexStack.top() != -1 && vec[indexStack.top()] > vec[i]){
            // if the current element is smaller than
            // element with index stored on the top of stack
            // then, we pop the top element and store the
            // current element index as the right_smaller
            // for the popped element.
            right[indexStack.top()] = i;
            indexStack.pop();
        }
        if(i > 0 && vec[i] == vec[i-1]){
            // we use this condition to avoid the
            // unnecessary loop to find the left_smaller.
            // since the previous element is same as current
            // element, the left_smaller will always be the
            // same for both.
            left[i] = left[i-1];
        }else{
            // Element with the index stored on the top of
            // the stack is always smaller than the current
            // element. Therefore the left_smaller[i] will
            // always be s.top().
            left[i] = indexStack.top();
        }
        indexStack.push(i);
        i++;
    }
    for(int j = 0; j < vec.size(); j++){
         // here we find area with every element as the
        // smallest element in their range and compare it
        // with the previous area.
        // in this way we get our max Area form this
        maxArea = max(maxArea, vec[j] * (right[j] - left[j] - 1));
    }
    return maxArea;
}

int main(){
    int n, curr;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> curr;
        vec.push_back(curr);
    }
    
    cout << maxArea(vec);
    return 0;
}

