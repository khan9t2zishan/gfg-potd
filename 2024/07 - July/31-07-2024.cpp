/*

Author : Zishan Khan 
Date : 31/07/2024
Problem : Longest Common Prefix of Strings
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1

*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
      int minlen=1001,count=0;
        string ans;
        for(int i=0;i<arr.size();i++){
            int len=arr[i].length();
            if(len<minlen){
                minlen=len;
                ans=arr[i];
            }
        }
        for(int i=0;i<minlen;i++){
            for(int j=0;j<arr.size();j++){
                if(arr[j][i]!=ans[i]){
                    ans=ans.substr(0,count);
                }
                
            }
            count++;
        }
        if(ans.length()==0){
            return "-1";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
