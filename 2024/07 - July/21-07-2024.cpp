/*

Author : Zishan Khan 
Date : 21/07/2024
Problem : Maximum product subset of an array
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1

*/

//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        long long int prod=1;
        int zero=0,non_zero=0,maxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0){
                prod=(prod*arr[i])%1000000007;
                non_zero=1;
            }
            else{ zero=1;}
            if(arr[i]<0 and arr[i]>maxi)
            maxi=arr[i];
        }
        if(non_zero!=1) return 0;
        if(arr.size()==2 and zero==1 and prod<0) return 0;
        if(prod<0) prod/=maxi;
        return prod;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
