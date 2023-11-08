/*

Author : Zishan Khan 
Date : 08/11/2023
Problem : Print Matrix in snake Pattern
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
         int n = matrix.size();
        vector<int> list;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i & 1) == 0) list.push_back(matrix[i][j]);
                else list.push_back(matrix[i][n - 1 - j]);
            }
        }
        return list;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
