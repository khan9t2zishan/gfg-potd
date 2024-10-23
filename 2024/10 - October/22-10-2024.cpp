/*

Author : Zishan Khan 
Date : 22/10/2024
Problem : Sub-arrays with equal number of occurences
Difficulty : Hard
Problem Link : https://www.geeksforgeeks.org/problems/sub-arrays-with-equal-number-of-occurences3901/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
         unordered_map<int, int> map;
        map[0] = 1;  // Initialize the map with 0 difference count
        int ans = 0;
        int countX = 0;
        int countY = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                ++countX;
            }
            if (arr[i] == y) {
                ++countY;
            }
            int diff = countX - countY;
            if (map.find(diff) != map.end()) {
                ans += map[diff];
            }
            map[diff]++;
        }
    
        return ans;
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
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        string ks1;
        getline(cin, ks1);
        int y = stoi(ks1);
        Solution ob;
        int ans = ob.sameOccurrence(arr, x, y);
        cout << ans << "\n";
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends
