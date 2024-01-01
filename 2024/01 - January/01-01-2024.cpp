/*

Author : Zishan Khan 
Date : 01/01/2024
Problem : Array Pair Sum Divisibility Problem
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if (nums.size() % 2 == 1) return false;

        vector<int> arr(k, 0);
        for (int i = 0; i < nums.size(); ++i) arr[nums[i] % k]++;
        int i = 1, j = k - 1;
        if (arr[0] % 2 == 1) return false;

        while (i <= j) {
            if (arr[i] != arr[j]) return false;
            ++i;--j;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends
