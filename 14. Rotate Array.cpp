#include <iostream>
#include <vector>
using namespace std;

int main() {

    ////////////////////////REVIEW-1////////////////////////////////
    // vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    // int n = a.size();

    ////////////////////////REVIEW-2////////////////////////////////
    // vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    // int n = a.size();

    ////////////////////////REVIEW-3////////////////////////////////
    // vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    // int n = a.size();
    
    /*
    Question 14 — Rotate Array
    Problem
    Given an array nums, rotate the array to the right by k steps.
    Example 1
    Input:
    nums = [1,2,3,4,5,6,7]
    k = 3

    Output:
    [5,6,7,1,2,3,4]
    Example 2
    Input:
    nums = [-1,-100,3,99]
    k = 2

    Output:
    [3,99,-1,-100]
    */

    vector<int> a = {-1,-100,3,99};
    int n = a.size();

    int k = 5;

    if (k == 0){
        cout<<"You are worng";
        return 0;
    }
    if (k > n){
        k = k % n;
    }

    cout<<k << endl;

    int l = 0, r=n-1;

    while(l < r){
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }

    for (int i : a){
        cout<<i<<",";
    }
    cout<<endl;

    l = 0;
    r = k-1;

    while(l<r){
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }

    for (int i : a){
        cout<<i<<",";
    }
    cout<<endl;

    l = k;
    r = n-1;

    while(l<r){
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
    for (int i : a){
        cout<<i<<",";
    }
    cout<<endl;

    return 0;
}