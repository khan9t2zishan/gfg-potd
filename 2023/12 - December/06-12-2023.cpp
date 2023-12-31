/*

Author : Zishan Khan 
Date : 06/12/2023
Problem : How Many X's?
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/how-many-xs4514/1

*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countX(int L, int R, int X) {
        int count =0;
        for(int i =L+1;i<R ;i++){
            int num=i;
            while(num!=0){
                if(num%10==X)count++;
                num=num/10;
           }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, X;
        cin >> L >> R >> X;
        Solution ob;
        int ans = ob.countX(L, R, X);
        cout << ans << "\n";
    }
}

// } Driver Code Ends
