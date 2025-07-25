class Solution {
  public:
   int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        int n = mat1.size();  
        int total = n * n; 
    
        int p1 = 0, p2 = total - 1; 
        int cnt = 0;
    
        while (p1 < total && p2 >= 0) {
            int i1 = p1 / n, j1 = p1 % n;
            int i2 = p2 / n, j2 = p2 % n;
    
            int sum = mat1[i1][j1] + mat2[i2][j2];
    
            if (sum == x) {
                cnt++;
                p1++;
                p2--;
            } else if (sum < x) {
                p1++;
            } else {
                p2--;
            }
        }
    
        return cnt;
    }
};
