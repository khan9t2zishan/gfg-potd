/*

Author : Zishan Khan 
Date : 21/08/2024
Problem : Shortest path in Undirected Graph
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1

*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
      vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<vector<int>> adj(N);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
    
        // Distance array
        vector<int> dis(N, INT_MAX);
        dis[src] = 0;
    
        // BFS
        queue<int> q;
        q.push(src);
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
    
            for (int nbr : adj[cur]) {
                if (dis[cur] + 1 < dis[nbr]) {
                    dis[nbr] = dis[cur] + 1;
                    q.push(nbr);
                }
            }
        }
    
        // Replace unreachable nodes' distance with -1
        for (int i = 0; i < N; ++i) {
            if (dis[i] == INT_MAX) {
                dis[i] = -1;
            }
        }
    
        return dis;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends