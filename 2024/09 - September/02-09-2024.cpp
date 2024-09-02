/*

Author : Zishan Khan 
Date : 02/09/2024
Problem : Minimum Cost Path
Difficulty : Hard
Problem Link : https://www.geeksforgeeks.org/problems/minimum-cost-path3833/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.


struct Custom {
        int x;
        int y;
        int dis;
        Custom(int x, int y, int dis) : x(x), y(y), dis(dis) {}
    };
    
    struct Compare {
        bool operator()(Custom const& a, Custom const& b) {
            return a.dis > b.dis;
        }
    };
    
    int minimumCostPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dis(n, vector<int>(m, INT_MAX));
        priority_queue<Custom, vector<Custom>, Compare> pq;
        
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        
        dis[0][0] = grid[0][0];
        pq.push(Custom(0, 0, grid[0][0]));
        
        while (!pq.empty()) {
            Custom curr = pq.top();
            pq.pop();
            
            for (int i = 0; i < 4; ++i) {
                int nbrX = curr.x + dx[i];
                int nbrY = curr.y + dy[i];
                
                if (valid(nbrX, nbrY, n, m)) {
                    if (curr.dis + grid[nbrX][nbrY] < dis[nbrX][nbrY]) {
                        dis[nbrX][nbrY] = curr.dis + grid[nbrX][nbrY];
                        pq.push(Custom(nbrX, nbrY, dis[nbrX][nbrY]));
                    }
                }
            }
        }
        
        return dis[n - 1][m - 1];
    }
    
    bool valid(int x, int y, int n, int m) {
        return x >= 0 && y >= 0 && x < n && y < m;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
