class Solution {
	public:
	int getLastDigit(string& a, string& b) {
		// code here
		if (b == "0") { 
			return 1;
		}
		int base = a[a.length() - 1]-'0';
		
		if (base == 0) {
			return 0;
		}
		
		int exp = 0;
		int blen = b.length();
		if (blen == 1) {
			exp = (b[0]-'0')%4;
		}
		else {
			int ltd = (b[blen - 2]-'0')*10 + (b[blen - 1]-'0');
			exp = ltd%4;
		}
		if (exp == 0) {
			exp = 4;
		}
		int ans = pow(base, exp);
		return ans%10;
	}
};

