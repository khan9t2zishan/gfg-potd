/*

Author : Zishan Khan 
Date : 23/03/2024
Problem : Fibonacci series up to Nth term
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/fibonacci-series-up-to-nth-term/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        long long MOD = 1000000000 + 7;
        vector<int> ans;
        int t1 = 0 , t2 = 1;
        ans.push_back(t1);
        if (n == 0) return ans; 
        
        ans.push_back(t2);
        if (n == 1) return ans; 
        
        for (int i = 2; i <= n; i++) {
            int next = (t1 + t2) % MOD;
            ans.push_back(next);
            t1 = t2;
            t2 = next;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
