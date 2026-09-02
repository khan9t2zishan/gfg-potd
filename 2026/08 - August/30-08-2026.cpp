class Solution {
  public:
    vector<int> getMarks(vector<int> &l, vector<int> &r, vector<int> &rank) {
        // code here
        vector<int> temp;

        for(int i=0;i<l.size();i++){
            int low=l[i];
            int high=r[i];

            for(int j=low;j<=high;j++){
                temp.push_back(j);
            }
        }

        vector<int> ans;
        for(int i=0;i<rank.size();i++){
            int pos=rank[i]-1;

            ans.push_back(temp[pos]);
        }

        return ans;
    }
};
