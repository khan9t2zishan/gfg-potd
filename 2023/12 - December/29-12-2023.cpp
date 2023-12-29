/*

Author : Zishan Khan 
Date : 29/12/2023
Problem : Check if a string is repetition of its substring of k-length
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/check-if-a-string-is-repetition-of-its-substring-of-k-length3302/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	   if (n % k != 0) return 0;
    
        unordered_map<string, int> hm;
    
        for (int i = 0; i < n; i += k) {
            string sub = s.substr(i, k);
            hm[sub] = hm[sub] + 1;
        }
    
        int x = hm.size();
        if (x == 1) return 1;
        if (x == 2) for (auto val : hm) if (val.second == 1) return 1;
        return 0;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends
