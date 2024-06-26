/*

Author : Zishan Khan 
Date : 11/04/2024
Problem : Gray to Binary equivalent
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/gray-to-binary-equivalent-1587115620/1

*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    int grayToBinary(int n)
    {
        int ans = 0;
        while(n > 0)
        {
            ans = ans ^ n;
            n = n >> 1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends
