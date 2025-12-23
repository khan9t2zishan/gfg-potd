class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        int a,b;
        vector<int> v;
        sort(arr.begin(),arr.end());

        for(int i=0;i<queries.size();i++)
        {
            a = queries[i][0];

            b = queries[i][1];

            int count = 0;

            
            int left = lower_bound(arr.begin(),arr.end(),a) - arr.begin();

            int right = upper_bound(arr.begin(),arr.end(),b) - arr.begin();

            

            count = right-left;

            v.push_back(count);

        }

        return v;

    }
};
