#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    /*
    Question 1 — Two Sum
    Problem
    You are given an integer array nums and an integer target.
    Return the indices of the two numbers such that they add up to target.
    You may assume that exactly one valid answer exists, and you may not use the same element twice.
    Example
    Input:
    nums = [11, 2, 15, 7]
    target = 9

    Output:
    [1,3]
    */

    vector<int> a = {11,2,15,7};
    int n = a.size();

    int t = 9;

    unordered_map<int, int> mp;

    for (int i = 0; i<n;i++){
        int req = t - a[i];
        if(mp.find(req) != mp.end()){
            cout<<mp[req]<<","<<i;
            break;
        }
        mp[a[i]] = i;
    }

    ////////////////////////REVIEW-1////////////////////////////////
    // vector<int> a = {11,2,15,7};
    // int n = a.size();

    // int t = 9;

    ////////////////////////REVIEW-2////////////////////////////////
    // vector<int> a = {11,2,15,7};
    // int n = a.size();

    // int t = 9;

    ////////////////////////REVIEW-3////////////////////////////////
    // vector<int> a = {11,2,15,7};
    // int n = a.size();

    // int t = 9;

    return 0;
}