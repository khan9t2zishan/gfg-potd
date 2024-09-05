/*

Author : Zishan Khan 
Date : 05/09/2024
Problem : Missing in Array
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1

*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

       int sum=(n*(n+1))/2;
        int sum1=accumulate(arr.begin(),arr.end(),0);
        return sum-sum1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends
