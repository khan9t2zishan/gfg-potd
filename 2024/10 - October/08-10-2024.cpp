/*

Author : Zishan Khan 
Date : 08/10/2024
Problem : Largest Pair Sum
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/pair-sum--120604/1

*/

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
         int pairsum(vector<int> &arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        int secmaxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>secmaxi&&arr[i]<maxi){
                secmaxi=arr[i];
            }
        }
        return maxi+secmaxi;
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
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends
