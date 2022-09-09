#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
#define val 1000000100000
string a;
int nb, ns, nc, pb, ps, pc, r;

int Hamburgers() {
	int s = 0;
	int e = val;
	int ans = -1;

	int cb = 0, cs = 0, cc = 0;
	//Ek hamburger me kitne bread,sausage,cheese chahiye

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'B') {
			cb++;
		}
		else if (a[i] == 'S') {
			cs++;
		} else {
			cc++;
		}
	}

	while (s <= e) {
		int mid = (s + e) / 2;

		int total_price_required_for_bread =
		    (((mid * cb) - nb) * pb) < 0 ? 0 : (((mid * cb) - nb) * pb);

		int total_price_required_for_sausage =
		    (((mid * cs) - ns) * ps) < 0 ? 0 : (((mid * cs) - ns) * ps);

		int total_price_required_for_cheese =
		    (((mid * cc) - nc) * pc) < 0 ? 0 : (((mid * cc) - nc) * pc);

		int total_price = total_price_required_for_cheese + total_price_required_for_bread +
		                  total_price_required_for_sausage;

		if (total_price <= r) {
			s = mid + 1;
			ans = mid;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}



int32_t main() {
	cin >> a;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	cout << Hamburgers() << endl;;
}