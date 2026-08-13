#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 10 — Squares of a Sorted Array
    Problem
    Given a sorted array nums in non-decreasing order.
    Return an array of the squares of each number sorted in non-decreasing order.
    Example 1
    Input:
    [-4,-1,0,3,10]

    Output:
    [0,1,9,16,100]
    Example 2
    Input:
    [-7,-3,2,3,11]

    Output:
    [4,9,9,49,121]
    */

    vector<int> a = {-4,-1,0,3,10};
    int n = 5;

    int l = 0, r = n-1;
    int p = n-1;

    vector<int> b(n);

    while (l<=r){
        if (abs(a[l]) > abs(a[r])){
            b[p] = a[l] * a[l];
            l++;
        }
        else{
            b[p] = a[r] * a[r];
            r--;
        }
        p--;
    }

    for (int i : b){
        cout<<i<<",";
    }

    return 0;
}