/*

Author : Zishan Khan
Date : 04/11/2023
Problem : Find Transition Point
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
         int l=0; int h=n-1;
        while(l<=h)
        {
            int m = (l+h)/2;
            if(arr[m]==0)
            l=m+1;
            
            else if(arr[m]==1)
            {
                if(m-1>=0 && arr[m-1]==1)
                h=m-1;
                
                else
                return m;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
