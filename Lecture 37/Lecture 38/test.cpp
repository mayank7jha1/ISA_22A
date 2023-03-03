#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
vector<int>gr[N];//array of vectors

void bfs(int scr, int n, int &ans) {
	vector<int>distance(n + 1, INT_MAX);

	queue<int>q;
	q.push(scr);
	distance[scr] = 0;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (auto nbr : gr[x]) {
			if (distance[nbr] == INT_MAX) {
				distance[nbr] = distance[x] + 1;
				q.push(nbr);
			} else if (distance[nbr] >= distance[x]) {
				//Backedge:
				ans = min(ans, distance[nbr] + distance[x] + 1);
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}

	int ans = n + 1;
	//mere liye shortest cycle ki length
	//batayega

	//graph ke ander kya ye possible hain ki n nodes hain
	//and n+1 cycle ki length hojaaye

	//Go to every node and call bfs.

	for (int i = 1; i <= n; i++) {
		bfs(i, n, ans);
	}

	if (ans == n + 1) {
		cout << "No Cycle Exists " << endl;
	} else {
		cout << "Shortest Cycle Length is equal to " << ans << endl;
	}
}
// n=5 and m=6;
// //1 and 2
// //x=1 and y=2;
// //adj list:

// 1->2
// 2->1

// 0
// 1-->2
// 2-->1
// 3
// 4
// 5
// 6