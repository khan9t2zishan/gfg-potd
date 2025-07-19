class Solution {
  public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
        return false;
    }
    
    int combination(int st){
        if(st==0)
         return 0;
         
         int temp=1;
         while(st!=0){
         temp = temp * st;
         st--;
       }
        return temp;
    }
    int vowelCount(string& s) {
        // code here
        unordered_map<char,int> mp;
        for(char ch:s){
            if(isvowel(ch))
            mp[ch]+=1;
        }
        
        int ans =0;
        ans = combination(mp.size());
        for(auto it:mp){
            if(it.second>1)
            ans = ans * it.second;
        }
        
        return ans;
    }
};
