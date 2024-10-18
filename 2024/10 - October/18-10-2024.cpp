/*

Author : Zishan Khan 
Date : 18/10/2024
Problem : Single Number
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/single-number1014/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
       int number=0;
        for(int i=0;i<arr.size();i++){
            number=number^arr[i];
        }
        return number;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getSingle(arr);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends

