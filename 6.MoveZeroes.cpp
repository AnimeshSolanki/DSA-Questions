#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 6 — Move Zeroes
    Problem
    Given an integer array nums, move all 0s to the end of the array while maintaining the relative order of the non-zero elements.
    You must perform this operation in-place.
    Example 1
    Input:
    nums = [0,1,0,3,12]

    Output:
    [1,3,12,0,0]
    Example 2
    Input:
    nums = [0]

    Output:
    [0]
    */

    vector<int> a = {0,1,0,3,12};
    int n = a.size();

    int z = 0;

    for (int i = 0; i<n;i++){
        if (a[i] == 0){
            continue;
        }else{
            int t = a[i];
            a[i] = a[z];
            a[z] = t;
            z++;
        }
    }

    for(int i : a){
        cout<<i<<",";
    }

    return 0;
}