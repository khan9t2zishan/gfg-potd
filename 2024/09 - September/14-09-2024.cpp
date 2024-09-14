/*

Author : Zishan Khan 
Date : 14/09/2024
Problem : Alternate positive and negative numbers
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1

*/


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
       vector<int> positive,negative;
        for(auto x:arr){
            if(x>=0)positive.push_back(x);
            else negative.push_back(x);
        }
        int i=0,j=0,k=0;
        while(i<positive.size() and j<negative.size()){
            if(k%2)arr[k++]=negative[j++];
            else arr[k++]=positive[i++];
        }
        while(i<positive.size())arr[k++]=positive[i++];
        while(j<negative.size())arr[k++]=negative[j++];
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
