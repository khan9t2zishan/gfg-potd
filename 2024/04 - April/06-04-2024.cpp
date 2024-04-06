/*

Author : Zishan Khan 
Date : 06/04/2024
Problem : Count ways to N'th Stair
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    long long countWays(int n) {
        return n / 2 + 1;
    }
};

//{ Driver Code Starts.
int main() {
    // taking count of testcases
    int t;
    cin >> t;

    while (t--) {
        // taking stair count
        int n;
        cin >> n;
        Solution ob;
        cout << ob.countWays(n) << endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends
