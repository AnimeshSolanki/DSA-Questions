#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 7 — Find Pivot Index
    Problem
    Given an integer array nums, find the pivot index.
    The pivot index is the index where:
    sum(left side) == sum(right side)
    Return the leftmost pivot index.
    If no pivot exists, return -1.
    Example 1
    Input:
    nums = [1,7,3,6,5,6]

    Output:
    3
    Explanation:
    Left Sum  = 1+7+3 = 11
    Right Sum = 5+6 = 11
    Example 2
    Input:
    nums = [1,2,3]

    Output:
    -1
    Example 3
    Input:
    nums = [2,1,-1]

    Output:
    0
    */

    vector<int> a ={1,7,3,6,5,6};
    int n = a.size();

    int lS = 0, rS = 0;
    int tS = 0;

    int p = -1;

    for (int i = 0; i<n;i++){
        tS += a[i];
    }

    for (int i = 0; i<n; i++){
        rS = tS - a[i] -lS; //tS = lS + a[i] + rS;
        if (lS == rS){
            p = i;
            break;
        }
        lS+=a[i];
    }

    cout<<p;

    return 0;
}