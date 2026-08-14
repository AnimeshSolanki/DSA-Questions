#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 11 — Product of Array Except Self
    Problem
    Given an integer array nums, return an array answer such that:
    answer[i]
    =
    product of all elements except nums[i]
    You must not use division.
    Example 1
    Input:
    nums = [1,2,3,4]

    Output:
    [24,12,8,6]
    Explanation:
    answer[0] = 2*3*4 = 24
    answer[1] = 1*3*4 = 12
    answer[2] = 1*2*4 = 8
    answer[3] = 1*2*3 = 6
    Example 2
    Input:
    nums = [-1,1,0,-3,3]

    Output:
    [0,0,9,0,0]
    */

    vector<int> a = {1,2,3,4};
    int n = a.size();

    vector<int> b(n);

    int lp=1,rp=1;

    for (int i = 0;i<n; i++){
        b[i] = lp;
        lp *= a[i];
    }

    for (int i = n-1; i>=0; i--){
        b[i] *= rp;
        rp *= a[i];
    }

    for (int i : b){
        cout<<i<<",";
    }

    return 0;
}