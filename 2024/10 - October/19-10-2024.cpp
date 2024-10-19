/*

Author : Zishan Khan
Problem : Nearest multiple of 10
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/nearest-multiple-of-102437/1

*/

//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
          int n=str.length();
        if(str[n-1]<='5'){
            str[n-1]='0';
            return str;
        }
        str[n-1]='0';
        int i=n-2;
        while(i>=0 && str[i]=='9'){
            str[i]='0';
            i--;
        }
        if(i<0) str = '1'+str;
        else str[i]++;
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends
