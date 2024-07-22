/*

Author : Zishan Khan 
Date : 14/06/2024
Problem : Armstrong Numbers
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
       int sum=0;
        int temp = n;
        while(temp){
            int digit=temp%10;
            sum+= digit*digit*digit;
            temp/=10;
        }
        if(sum==n)
        return "true";
        else
        return "false";
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
