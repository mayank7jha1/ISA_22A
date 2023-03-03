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

	void Print() {
		for (auto x : l) {
			//For every element that is inside l(map)
			//ek pair hain : node and a vector/list

			T s = x.first;
			cout << s << " -> " << " ";
			// vector<char>nbr = x.second;
			list<T>nbr = x.second;
			for (auto t : nbr) {
				//for every element that is inside
				//nbr list of the corresponding x(node):
				cout << t << " ";
			}
			cout << endl;
		}
		cout << endl;
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

	g.Print();


}