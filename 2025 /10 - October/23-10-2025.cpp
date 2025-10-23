class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {   
        // code here
        int n=points.size();
        priority_queue<pair<int, pair<int, int>>>pq;
        
        for(auto &it:points){
            int x=it[0];
            int y=it[1];
            int d=x*x+y*y;
            if(pq.size()<k){
                pq.push({d, {x, y}});
            }else if(d<pq.top().first){
                pq.pop();
                pq.push({d, {x, y}});
            }
        }
        
        vector<vector<int>>ans;
        
        while(!pq.empty()){
            auto it=pq.top();
            int x=it.second.first;
            int y=it.second.second;
            ans.push_back({x, y});
            pq.pop();
        }
        
        return ans;
    }
};
