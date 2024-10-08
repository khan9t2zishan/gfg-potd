/*

Author : Zishan Khan 
Date : 29/09/2024
Problem : Total count
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/total-count2415/1

*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
     int totalCount(int k, vector<int>& arr) {
        // code here
        int ans = 0;
        for(auto x : arr) {
            ans += (x + k - 1) / k;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
