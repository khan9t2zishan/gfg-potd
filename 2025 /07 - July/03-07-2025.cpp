class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
         int n = s.size();
        vector<int> counter_arr(26,0);
        int l=0,r=0;
        int max_len=-1;
        int distinct=0;
        while(r<n) {
            bool can_grow = counter_arr[s[r]-'a']!=0 || distinct<k;
            if(can_grow) {
                if(counter_arr[s[r]-'a']==0) {distinct++;}
                counter_arr[s[r]-'a']++;r++;
                if(distinct==k) {
                    max_len=max(max_len,r-l);
                    //cout<<"max_len: "<<max_len<<" r: "<<r<<" l: "<<l<<"\n";
                }
            } else {
                counter_arr[s[l]-'a']--;
                if(counter_arr[s[l]-'a']==0) distinct--;
                l++;
            }
        }
        return max_len; 
    }
};
