/*

Author : Zishan Khan 
Date : 26/09/2024
Problem : Roof Top
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/roof-top-1587115621/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int consecutive_steps=0,maxi=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]){
                consecutive_steps++;
                maxi=max(maxi,consecutive_steps);
            }
            else{
                consecutive_steps=0;
            }
        }
        return maxi;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
