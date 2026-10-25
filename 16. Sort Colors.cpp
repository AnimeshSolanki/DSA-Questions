#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 16 — Sort Colors
    Problem statement
    You are given an integer array nums containing n objects, where each object is represented by one of three integers:
    •	0 represents red.
    •	1 represents white.
    •	2 represents blue.
    Your task is to sort the array in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
    You must solve this problem without using the library's built-in sorting function.
    Example 1
    Input:
    nums = [2,0,2,1,1,0]

    Output:
    [0,0,1,1,2,2]
    Example 2
    Input:
    nums = [2,0,1]

    Output:
    [0,1,2]
    Example 3
    Input:
    nums = [0]

    Output:
    [0]

    */

    vector<int> a = {2,0,2,1,1,0};
    int n = a.size();

    int l = 0, r = n-1;
    int i = 0;

    while(i <= r){
        if (a[i] == 0){
            int t = a[i];
            a[i] = a[l];
            a[l] = t;
            l++;
            i++;
            continue;
        }
        if (a[i] == 1){
            i++;
            continue;
        }
        if (a[i] == 2){
            int t = a[i];
            a[i] = a[r];
            a[r] = t;
            r--;
            continue;
        }
    }

    for (int i : a){
        cout<<i<<",";
    }


    return 0;
}