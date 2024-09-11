/*

Author : Zishan Khan 
Date : 11/09/2024
Problem : Minimum Cost of ropes
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        long long cost=0;
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<arr.size();i++){
            q.push(arr[i]);
        }
        while(q.size()>1){
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            cost+=a+b;
            q.push(a+b);
        }
        return cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends
