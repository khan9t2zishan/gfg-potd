class Solution {
  public:
    int solve(int n, string s) {
        // code here
        unordered_map<char, int> mp;
		int size = 0, count = 0;
		for (char& c : s) {
			// if a customer is not present and rejected
			if (mp.count(c) != 0 && mp[c] != -1) {
				// exit the customer i.e mp[c] = 0;
				mp[c]--;
				size--;
			}
			else {
				// rejected customer so move on
				if (mp[c] == -1)
					continue;

				// if the cafe has space add the customer
				if (size < n) {
					mp[c]++;
					size++;
				}
				else {
					// reject the customer
					mp[c] = -1;
					count++;
				}
			}
		}
		return count;
    }
};

