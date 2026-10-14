#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 15 — Merge Sorted Array
    Problem
    You are given two sorted arrays.
    nums1 has enough extra space to hold all elements of nums2.
    Merge them into one sorted array.
    Example
    Input:

    nums1 = [1,2,3,0,0,0]
    m = 3

    nums2 = [2,5,6]
    n = 3

    Output:

    [1,2,2,3,5,6]
    */

    int a[6] = {1,2,3,0,0,0};
    int m = 3;

    int b[3] = {2,5,6};
    int n = 3;

    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while (i >= 0 || j >= 0){
        if (a[i] >= b[j]){
            a[k] = a[i];
            i--;
        }else{
            a[k] = b[j];
            j--;
        }
        k--;
    }

    while(j >= 0){
        a[k] = b[j];
        j--;
        k--;
    }

    for (int i : a){
        cout<<i<<",";
    }

    return 0;
}