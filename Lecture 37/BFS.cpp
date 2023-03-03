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

	void bfs(T scr) {
		unordered_map<T, bool>visited;
		//Initialisattion
		for (auto x : l) {
			visited[x.first] = 0;//visited[A]=0;
		}

		queue<T>q;
		q.push(scr);
		visited[scr] = 1;

		while (!q.empty()) {

			T node = q.front();
			cout << node << " ";
			q.pop();

			for (auto nbr : l[node]) {
				if (visited[nbr] == 0) {
					q.push(nbr);
					visited[nbr] = 1;
				}
			}
		}
	}

};



int main() {
	//Undirected and Unweighted graph
	Graph<char>g;

	int n, m;
	cin >> n >> m;
	//No of Nodes: n
	//No. of Edges: m

	int direction = 0;//Graph is undirected

	for (int i = 0; i < m; i++) {
		// int direction;
		char x, y;
		cin >> x >> y;
		//Connection banana hain x and y me
		g.addEdge(x, y, direction);
	}

	//g.Print();
	g.bfs('A');


}