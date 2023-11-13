/*

Author : Zishan Khan 
Date : 13/11/2023
Problem : Shortest Common Supersequence
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/shortest-common-supersequence0322/1
*/

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
         return m+n - lcs(m,n, X,Y);
    }
     int lcs(int m, int n, string s1, string s2)
    {
        int dp[m + 1][n + 1];
        

        for( int i =0 ; i<=m ;i++)
        {
            for( int j =0; j<=n;j++)
            {
                 if(i==0 || j==0)
                dp[i][j] =0; 
                
                else if( s1[i-1]==s2[j-1] )
                    dp[i][j] = 1+dp[i-1][j-1];  
                    
                else
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        
        return dp[m][n];
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends
