class Solution {
	//Idea Samaj aaraha hain?
public:
	string decodeAtIndex(string a, int k) {
		stack<pair<string, long long>>s;

		for (int i = 0; i < a.length(); i++) {
			string x = "";
			while (i<a.length() and a[i]>'9') {
				x = x + a[i];
				i++;
			}

			long long l = (x.length() + (s.empty() ? 0 :
			                             s.top().second)) * (a[i] - '0');
			s.push({x, l});

			if (l >= k) {
				break;
			}
		}

		while (!s.empty()) {
			auto p = s.top();//code,36
			string x = p.first;//x=code
			long long l = p.second;//l=36

			s.pop();

			k = k % (x.length() + ((s.empty() ? 0 : s.top().second)));

			if (k == 0) {
				//Last Character:
				k = x.length()  + ((s.empty() ? 0 : s.top().second));
				//k=12;//Because it is easier to check now;
			}
			//leet,8:    x=leet l=8, stack empty(): k=6
			if (s.empty()) {
				string ans = "";
				ans += x[k - 1];
				return ans;
			}

			if (k > s.top().second) {//k<8 that means answer is in leet part
				//leet,8  :::: k>8// ans is in code string
				string ans = "";

				ans += x[k - s.top().second - 1];
				return ans;
			}
		}
		return "";
	}
};