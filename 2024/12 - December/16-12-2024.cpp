//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int i = 0, j = 0, n = a.size(), m = b.size(), ans, c = 0;

        while (true) {
            int x1 = (i < n) ? a[i] : INT_MAX;
            int x2 = (j < m) ? b[j] : INT_MAX;

            if (x1 < x2) {
                i++;
                ans = x1;
            } else {
                j++;
                ans = x2;
            }
            c++;
            if (c == k) {
                return ans;
            }
        }
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends
