#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    Question 3 — Best Time to Buy and Sell Stock
    Problem
    You are given an array prices.
    prices[i] represents the stock price on day i.
    Choose one day to buy and a later day to sell.
    Return the maximum profit possible.
    If no profit is possible, return 0.
    Example
    Input:
    [7,1,5,3,6,4]

    Output:
    5
    Explanation:
    Buy at 1
    Sell at 6
    Profit = 5
    Example 2
    Input:
    [7,6,4,3,1]

    Output:
    0
    */

    vector<int> a = {7,1,5,3,6,4};
    int n = a.size();

    int min = a[0];
    int maxP = 0;
    int minI = 0;
    int maxI = 0;

    for (int i = 1; i<n; i++){
        int p = a[i] - min;
        if (p > maxP){
            maxP = p;
            maxI = i;
        }
        if (a[i] < min){
            min = a[i];
            minI = i;
        }
    }

    cout << maxP <<endl;
    cout<<minI<<","<<maxI;

    ////////////////////////REVIEW-1////////////////////////////////
    // vector<int> a = {7,1,5,3,6,4};
    // int n = a.size();

    ////////////////////////REVIEW-2////////////////////////////////
    // vector<int> a = {7,1,5,3,6,4};
    // int n = a.size();

    ////////////////////////REVIEW-3////////////////////////////////
    // vector<int> a = {7,1,5,3,6,4};
    // int n = a.size();

    return 0;
}