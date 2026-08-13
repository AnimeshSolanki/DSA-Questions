#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    /*
    Question 9 — Find Numbers with Even Number of Digits
    Problem
    Given an array of integers, return how many numbers contain an even number of digits.
    Example
    Input:
    [12,345,2,6,7896]

    Output:
    2
    Explanation:
    12 -> 2 digits
    7896 -> 4 digits
    Example
    Input:
    [555,901,482,1771]

    Output:
    1
    */

    vector<int> a = {12,345,2,6,7896};
    int n = a.size();

    int c = 0;

    for ( int i = 0; i<n; i++){
        int d = 0;
        int t = a[i];
        if(t == 0){
            d = 1;
        }else{
            while(t != 0){
                d++;
                t /= 10;
            }
        }
        if (d % 2 == 0){
            c++;
        }
    }

    cout<<c;

    return 0;
}