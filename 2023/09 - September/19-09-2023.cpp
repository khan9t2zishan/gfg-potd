
/*

Author : Zishan Khan
Date : 19/09/2023
Problem : Find first set bit
Difficulty : Easy
Problem Link : https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1

*/

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int cnt=1;
        while(n!=0){
            if(n%2==1) return cnt;
            cnt++;
            n/=2;
        }
        return 0;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
