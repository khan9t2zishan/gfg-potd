class Solution {
  public:
   void solve(int n,int k,vector<int>&curr,vector<vector<int>>&ans,int i){
        if(n==0){
            if(curr.size()==k){
                ans.push_back(curr);
            }
            return ;
        }
        if(n<0  || i>9){
            return;
        }
        //nottake
        solve(n,k,curr,ans,i+1);
        //take
        curr.push_back(i);
        solve(n-i,k,curr,ans,i+1);
        curr.pop_back();
    }
    vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<vector<int>>ans;
        vector<int>curr;
        solve(n,k,curr,ans,1);
        return ans;
    
    }
};
