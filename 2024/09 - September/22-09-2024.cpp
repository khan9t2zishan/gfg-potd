/*

Author : Zishan Khan 
Date : 22/09/2024
Problem : Longest Prefix Suffix
Difficulty : Hard
Problem Link : https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int i=1,j=0,n=str.length();
        vector<int> storeLength(n,0);
        while(i<n){
            if(str[i]==str[j])storeLength[i++]=++j;
            else{
                if(j>0)j=storeLength[j-1];
                else i++;
            }
        }
        return storeLength[n-1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends
