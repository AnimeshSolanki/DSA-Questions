#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 8 — Running Sum of 1D Array
    Problem
    Given an array nums, return the running sum.
    The running sum at index i is:
    nums[0] + nums[1] + ... + nums[i]
    Example
    Input:
    [1,2,3,4]

    Output:
    [1,3,6,10]
    Example
    Input:
    [3,1,2,10,1]

    Output:
    [3,4,6,16,17]
    */

    vector<int> a = {3,1,2,10,1};
    int n = a.size();

    for (int i = 1;i<n;i++){
        a[i] += a[i-1];
    }

    for (int i : a){
        cout<<i<<",";
    }

    return 0;
}