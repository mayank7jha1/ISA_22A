#include<bits/stdc++.h>
using  namespace std;

//Ek Node ka design sochna hain.
//Implementation adj list

template<typename T>

class Graph {
	// map<char, vector<char>>l;//Dynamic array
	map<T, list<T>>l;//list is a doubly linked list

public:
	void addEdge(T x, T y, int direction) {
		l[x].push_back(y);

		if (direction == 0) {
			l[y].push_back(x);
		}
	}

	void bfs(T scr, T destination) {
		// unordered_map<T, bool>visited;

		unordered_map<T, int>distance;

		//Initialisattion
		// for (auto x : l) {
		// 	visited[x.first] = 0;//visited[A]=0;
		// }

		for (auto x : l) {
			distance[x.first] = INT_MAX;//visited[A]=0;
		}

		queue<T>q;
		q.push(scr);
		//visited[scr] = 1;
		distance[scr] = 0;

		while (!q.empty()) {

			T node = q.front();
			//cout << node << " ";
			q.pop();

			for (auto nbr : l[node]) {
				if (distance[nbr] == INT_MAX) {
					q.push(nbr);
					distance[nbr] = distance[node] + 1;
				}
			}
		}


		for (auto x : l) {
			cout << x.first << " --> " << distance[x.first] << endl;
		}

		cout << endl;
		cout << scr << " to " << destination << " --> " << distance[destination] << endl;
	}

};



int main() {
	//Undirected and Unweighted graph
	Graph<int>g;

	int n, m;
	cin >> n >> m;
	//No of Nodes: n
	//No. of Edges: m

	int direction = 0;//Graph is undirected

	for (int i = 0; i < m; i++) {
		// int direction;
		int x, y;
		cin >> x >> y;
		//Connection banana hain x and y me
		g.addEdge(x, y, direction);
	}
	int scr, destination;
	cin >> scr >> destination;
	// cout << scr << destination;

	//g.Print();
	g.bfs(scr, destination);
}















