class Solution {
public:
    int kBitFlips(vector<int>& arr, int k) {
        int n = arr.size();
        int flip = 0, ans = 0;

        for(int i = 0; i < n; i++) { 
            
            if(i >= k && arr[i-k] == 2)
                flip ^= 1;

            if((arr[i] ^ flip) == 0) {

                if(i + k > n)
                    return -1;

                ans++;
                flip ^= 1;
                arr[i] = 2;
            }
        }

        return ans;
    }
};
