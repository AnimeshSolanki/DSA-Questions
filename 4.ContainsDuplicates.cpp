#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    
    /*
    Question 4 — Contains Duplicate
    Problem
    Given an integer array nums, return true if any value appears at least twice.
    Return false if every element is distinct.
    Example
    Input:
    [1,2,3,1]

    Output:
    true
    Example
    Input:
    [1,2,3,4]

    Output:
    false
    */

    vector<int> a = {1,2,3,1};
    int n = a.size();

    unordered_set<int> us;

    for (int i = 0;i<n;i++){
        if (us.find(a[i]) != us.end()){
            cout<<"true";
            break;
        }
        us.insert(a[i]);
    }

    ////////////////////////REVIEW-1////////////////////////////////
    // vector<int> a = {1,2,3,1};
    // int n = a.size();

    ////////////////////////REVIEW-2////////////////////////////////
    // vector<int> a = {1,2,3,1};
    // int n = a.size();

    ////////////////////////REVIEW-3////////////////////////////////
    // vector<int> a = {1,2,3,1};
    // int n = a.size();

    return 0;
}