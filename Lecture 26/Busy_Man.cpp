#include<bits/stdc++.h>
using namespace std;
#define int long long

class Activity {
public:
	int Starting_Time;
	int Ending_Time;
};

Activity a[100005];
int n;

bool compare(Activity a, Activity b) {
	if (a.Ending_Time == b.Ending_Time) {
		return a.Starting_Time > b.Starting_Time;
	}
	return a.Ending_Time < b.Ending_Time; //Sort activities on the basis of endtime.
}

void Solve() {
	sort(a, a + n, compare);
	int ans = 1;
	int Previous_End_Time = a[0].Ending_Time;

	for (int i = 1; i < n; i++) {
		if (a[i].Starting_Time >= Previous_End_Time) {
			ans++;
			Previous_End_Time = a[i].Ending_Time;
		}
	}
	cout << ans << endl;
}

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i].Starting_Time >> a[i].Ending_Time;
		}
		Solve();
	}
}

