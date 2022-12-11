#include<bits/stdc++.h>
using namespace std;
#define int long long
#define As 20001

int IPC_Trainers() {
	int Total_Trainers, days;
	cin >> Total_Trainers >> days;

	int starting[As] = {0}, lectures[As] = {0}, sadness[As] = {0};
	priority_queue<pair<int, int>>pq;

	for (int i = 0; i < Total_Trainers; i++) {
		cin >> starting[i] >> lectures[i] >> sadness[i];
		pq.push({sadness[i], i});
	}

	int Lectures_Taken[As] = {0};//Konse teacher ne kitne lectures leliye
	set<int>s;
	for (int i = 1; i <= days; i++) {
		s.insert(i);
	}

	while (!pq.empty()) {
		auto x = pq.top();
		pq.pop();
		int ii = x.second;

		int start = starting[ii];
		int end = start + lectures[ii] - 1;

		for (int i = start; i <= end; i++) {
			auto f = s.lower_bound(i);
			if (f == s.end()) {
				break;
			} else {
				Lectures_Taken[ii]++;
				s.erase(f);
			}
		}
	}

	int Total_sadness = 0;
	for (int i = 0; i < Total_Trainers; i++) {
		Total_sadness += (lectures[i] - Lectures_Taken[i]) * sadness[i];
	}
	return Total_sadness;
}




int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cout << IPC_Trainers() << endl;
	}
}

// STL:




// Set:: 1 2    9



// T3: 4 Lectures : sadness sabse jada hain:
// He arrives at day 4:

// T3: day 4 , day 5, day 6, day 7;


// T1: 3 Lectures and iski sadness is second highest:
// He arrives at day day 3:

// 3, 4, 5

// T3: Day 3, Day 8 and Day 9.


// for (i = 3; i <= 5; i++) {
// 	s.lower_bound(5);//(logn)
// }

