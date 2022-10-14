#include<bits/stdc++.h>
using namespace std;
int n, m;
bool visited[1001][1001], solution[1001][1001];
char maze[1001][1001];

bool RatInMaze(int i, int j) {

	if (i == n and j == m) {
		solution[i][j] = 1;
		for (int x = 0; x <= n; x++) {
			for (int y = 0; y <= m; y++) {
				cout << solution[x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;//this means i have found a solution.//
		//if this is false than the compiler will think that even though it has found a
		//solution and has printed one it will think otherwise that it has not found a
		//solution and will continue to find other solutions and hence
		//this false will make all the possible solution of the program print.
	}




	if (visited[i][j] == 1) {//Yaha par solution nahi milega aap
		//return kardo;
		return false;
	}

	visited[i][j] = 1;//Agar visited nahi tha pehle to hum is box par gaye
	//and ab isko visited bana diya.

	solution[i][j] = 1;//This 1 represent that this box is part of the
	//path which results in solution.

	if (j + 1 <= m and visited[i][j + 1] == 0) {
		//Main right par jaasakta hu.
		//agar main right me jaasakta hu to jaaunga.
		bool rightans = RatInMaze(i, j + 1);
		if (rightans == true) {
			return true;
		}
	}

	if (i + 1 <= n and visited[i + 1][j] == 0) {
		bool downans = RatInMaze(i + 1, j);
		if (downans == true) {
			return true;
		}
	}

	//Current i,j box par vapas aaye and humne true return nahi kiya
	//iska matalb hain ki is box par solution nahi hain
	//so jo upar aapne solution[i][j] ko true kiya tha usko
	//vapas se false kardo.

	solution[i][j] = 0;//This box is not the part of your solu.

	return false;
}


int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;//Ka matlab already visited hain
			}
		}
	}
	n--, m--;//Because i want zero based indexing

	bool ans = RatInMaze(0, 0);
	if (ans == false) {
		cout << "-1" << endl;
	}
}