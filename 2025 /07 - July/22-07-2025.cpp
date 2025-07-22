class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        unordered_set<int>myset;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>0)
            myset.insert(arr[i]);
        }
            
        for(int i=1;i<=n;i++){
            if(myset.find(i)==myset.end()){
                return i;
            }
        }
        return n+1;
    }
};
