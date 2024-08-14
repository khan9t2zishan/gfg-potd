/*

Author : Zishan Khan 
Date : 04/08/2024
Problem : N meetings in one room
Difficulty : Easy
Problem Link : https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
         vector<pair<int,int>>meetings;
        for(int i=0;i<n;i++){
            meetings.push_back({end[i],start[i]});
        }
        sort(meetings.begin(),meetings.end());
        int count=0;
        int endtime=-1;
        for(int i=0;i<n;i++){
            if(meetings[i].second>endtime){
                count++;
                endtime=meetings[i].first;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
