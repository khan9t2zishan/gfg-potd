/*

Author : Zishan Khan 
Date : 29/11/2023
Problem : Euler circuit and Path
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/euler-circuit-and-path/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
vector<int> vis;
	int isEulerCircuit(int V, vector<int>adj[]){
	    vis = vector<int>(V + 1, 0);
        // checking connected or not
        dfs(0, adj);

        for (int i = 0; i < V; i++) {
            if (vis[i] == 0 && adj[i].size() > 0)
                return 0; // not connected
        }

        // 2
        int cnt = 0;
        for (int i = 0; i < V; i++) {
            if ((adj[i].size() % 2) == 1)
                cnt++;
        }
        // violates the condition for exactly once
        if (cnt > 2)
            return 0;

        // making sure exactly once and different start and end
        else if (cnt == 2)
            return 1; // EP
        else
            return 2; // EC - forming one whole cycle
    }

    void dfs(int u, vector<int> adj[]) {
        vis[u] = 1;
        for (int v : adj[u]) {
            if (vis[v] == 0)
                dfs(v, adj);
	}
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends
