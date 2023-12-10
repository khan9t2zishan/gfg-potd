/*

Author : Zishan Khan 
Date : 10/12/2023
Problem : Subarray with 0 sum
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

*/

//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
 int sum = 0;
        unordered_set<int> set;
        set.insert(0);

        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
            if (set.find(sum) != set.end()) {
                return true;
            }
            set.insert(sum);
        }

        return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends
