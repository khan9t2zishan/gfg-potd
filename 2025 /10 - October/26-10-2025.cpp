class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:arr){
            pq.push(it);
        }
        int sum=0;
        while(pq.size()>1){
            int top1=pq.top(); pq.pop();
            int top2=pq.top(); pq.pop();
            sum+=top1+top2;
            pq.push(top1+top2);
        }
        return sum;
    }
};
