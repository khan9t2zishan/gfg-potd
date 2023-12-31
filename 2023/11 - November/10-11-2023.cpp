/*

Author : Zishan Khan 
Date : 10/11/2023
Problem : Number following a pattern
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/number-following-a-pattern3126/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        string ans="";
        stack<int> st;
        int n=s.length();
        for(int i=0;i<=n;i++){
            st.push(i+1);
            if(s[i]=='I' || i==n){
                while(!st.empty()){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
