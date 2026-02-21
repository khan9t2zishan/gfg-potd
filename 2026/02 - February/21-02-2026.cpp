class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int n=citations.size();
        sort(citations.begin(),citations.end());
        int h=0; 
        for(int i=citations.size()-1;i>=0;i--){
            int ch=min(n-i,citations[i]);
            h=max(h,ch);
        }
        return h;
    }
};
