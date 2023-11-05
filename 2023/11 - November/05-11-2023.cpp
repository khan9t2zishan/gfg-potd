/*

Author : Zishan Khan 
Date : 05/07/2023
Problem : Top K Frequent Elements in Array
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1

*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        int N = nums.size();

        unordered_map<int, int> mp;
        for (int i = 0; i < N; i++)
            mp[nums[i]]++;

        priority_queue<pair<int, int> > pq;

        for (auto x : mp) {//N
            pq.push({ x.second, x.first });  //logN
        }
      
        vector<int> ans;

        for (int i = 1; i <= k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
