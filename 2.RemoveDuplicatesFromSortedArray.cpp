#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    /*
    Question 2 — Remove Duplicates from Sorted Array
    Problem
    Given a sorted integer array nums, remove the duplicates in-place such that each unique element appears only once.
    Return the number of unique elements.
    The relative order of the elements should remain the same.
    Example
    Input:
    nums = [1,1,2]

    Output:
    2

    Modified nums:
    [1,2,_]
    Input:
    nums = [0,0,1,1,1,2,2,3,3,4]

    Output:
    5

    Modified nums:
    [0,1,2,3,4,_,_,_,_,_]
    */

    vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    int n = a.size();

    int t= 1;

    for (int i = 1; i<n; i++){
        if(a[i] == a[t-1]){
            continue;
        }
        a[t] = a[i];
        t++;
    }

    cout<<t<<endl;
    for(int i = 0; i<t; i++){
        cout<<a[i]<<",";
    }

    ////////////////////////REVIEW-1////////////////////////////////
    // vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    // int n = a.size();

    ////////////////////////REVIEW-2////////////////////////////////
    // vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    // int n = a.size();

    ////////////////////////REVIEW-3////////////////////////////////
    // vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    // int n = a.size();

    return 0;
}