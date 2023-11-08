/*

Author : Zishan Khan 
Date : 07/11/2023
Problem : Sum of upper and lower triangles
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& mat, int n)
    {
          vector<int> al;
        int s1=0, s2=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n ;j++)
            {
                if(j>=i)
                s1+=mat[i][j];
                
                 if(j<=i)
                s2+=mat[i][j];
            }
        }
        al.push_back(s1);
        al.push_back(s2);
        return al;
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
        vector<int> result = ob.sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
