/*

Author : Zishan Khan 
Date : 15/04/2024
Problem : Count the elements
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/count-the-elements1529/1

*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q) {
        int nax = *max_element(a.begin(), a.end());
        vector<int> mp(nax + 1, 0);
        for (auto i : b)
            if (i <= nax)
                ++mp[i];

        for (int i = 1; i <= nax; ++i)
            mp[i] += mp[i - 1];

        vector<int> out;
        for (auto i : query)
            out.push_back(mp[a[i]]);

        return out;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> a, b, ans;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }
        int q;
        cin >> q;
        vector<int> query;
        for (int i = 0; i < q; i++) {
            cin >> input;
            query.push_back(input);
        }
        Solution obj;
        ans = obj.countElements(a, b, n, query, q);
        for (int i = 0; i < q; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
// } Driver Code Ends