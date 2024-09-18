/*

Author : Zishan Khan 
Date : 18/09/2024
Problem : Parenthesis Checker
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
       stack<char>st;
        for(auto i:x){
            if(i=='('|| i=='[' || i=='{') st.push(i);
            else{
                 if(st.empty()) return false;
                if(i==')' && st.top()=='(') st.pop();
                else if(i==']' && st.top()=='[') st.pop();
                else if(i=='}' && st.top()=='{') st.pop();
                else return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
