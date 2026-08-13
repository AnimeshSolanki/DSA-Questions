#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 5 — Missing Number
    Problem
    Given an array nums containing n distinct numbers in the range [0, n].
    Return the only number in the range that is missing from the array.
    Example
    Input:
    [3,0,1]

    Output:
    2
    Example
    Input:
    [0,1]

    Output:
    2
    Example
    Input:
    [9,6,4,2,3,5,7,0,1]

    Output:
    8
    */

    vector<int> a = {3,0,1};
    int n = a.size();

    int t = (n*(n+1))/2;

    for (int i = 0; i<n;i++){
        t = t -a[i];
    }

    cout<<t;

    ////////////////////////REVIEW-1////////////////////////////////
    // vector<int> a = {3,0,1};
    // int n = a.size();

    ////////////////////////REVIEW-2////////////////////////////////
    // vector<int> a = {3,0,1};
    // int n = a.size();

    ////////////////////////REVIEW-3////////////////////////////////
    // vector<int> a = {3,0,1};
    // int n = a.size();

    return 0;
}