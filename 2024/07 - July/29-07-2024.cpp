/*

Author : Zishan Khan 
Date : 29/07/2024
Problem : Row with max 1s
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int m=arr.size();
        int n=arr[0].size();
        int i=0 , j=n-1;
        int ans=-1;
        while(i<m && j>=0){
            if(arr[i][j]==1){
                ans=i;
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
