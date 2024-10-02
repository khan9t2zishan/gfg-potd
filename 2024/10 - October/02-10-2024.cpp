/*

Author : Zishan Khan 
Date : 02/10/2024
Problem : Rotate and delete
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/rotate-and-delete-1587115621/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        //CodeGenius
        int n=arr.size();
        int k=1;
        while(n>1){
            arr.insert(arr.begin(),arr.back());
            arr.pop_back();
            if(k>n) arr.erase(arr.begin());
            else arr.erase(arr.end()-k);
            n=arr.size();
            k++;
        }
        return arr[0];
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
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends
