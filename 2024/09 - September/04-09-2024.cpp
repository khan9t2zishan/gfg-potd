/*

Author : Zishan Khan 
Date : 04/09/2024
Problem : Count ways to N'th Stair(Order does not matter)
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    return 1+n/2;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
