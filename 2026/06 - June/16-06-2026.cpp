class Solution {
	public:
	vector<int> constructList(vector<vector<int>> &queries) {
		// code here
		vector<int> ans;
		int xr = 0;
		ans.push_back(0);
		 
		for (auto &q : queries) {
			if (q[0] == 0)
				ans.push_back(q[1] ^ xr);
			else
				xr ^= q[1];
		}
		for (int &e : ans)
			e ^= xr;
		
		sort(ans.begin(), ans.end());
		
		return ans;
	}
};

