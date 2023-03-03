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

	bool dfs_helper(T scr, unordered_map<T, bool> &visited, T parent) {
		// cout << scr << " ";
		visited[scr] = true;

		for (auto x : l[scr]) {
			if (visited[x] == 0) {
				bool cycle = dfs_helper(x, visited, scr);

				if (cycle == 1) {
					return true;
				}
			} else if (x != parent) {
				return true;
			}
		}
		return false;
	}



	bool dfs(T scr) {
		//cout << scr << " ";
		unordered_map<T, bool>visited;

		for (auto x : l) {
			visited[x.first] = 0;
		}

		return dfs_helper(scr, visited, -1);
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

	//g.Print();
	cout << g.dfs(0);


}