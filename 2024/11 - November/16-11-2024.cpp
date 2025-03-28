/*

Author : Zishan Khan 
Date : 16/11/2024
Problem : Move All Zeroes to End
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
         int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                arr[j]=arr[i];
                j++;
            }
        }
        for(;j<arr.size();j++) arr[j]=0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
