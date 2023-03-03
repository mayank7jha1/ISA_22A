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

	void dfs_helper(T scr, unordered_map<T, bool> &visited) {
		cout << scr << " ";
		//cout << "Mayank";
		visited[scr] = true;

		for (auto x : l[scr]) {
			if (visited[x] == 0) {
				dfs_helper(x, visited);
			}
		}
		//cout << endl;
	}

	void dfs(T scr) {
		//cout << scr << " ";
		unordered_map<T, bool>visited;

		for (auto x : l) {
			visited[x.first] = 0;
		}

		int count = 0;
		//You are going to every node and you are
		//calling a dfs helper function and if
		//a node is left out even after dfs_helper
		//tthat means it has to be in a different
		//component

		for (auto x : l) {
			if (!visited[x.first]) {
				cout << "Component No: " << count << " ---> ";
				dfs_helper(x.first, visited);
				cout << endl;
				count++;
			}
		}

		//cout << endl;
		cout << "Total No of Components : " << count << endl;
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
	g.dfs(0);


}