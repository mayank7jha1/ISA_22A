#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int n;
int grid[10][10], Saare_One, ans = -1, N = 10;

int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};


void intput_grid() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				Saare_One++;//These are the boxes where the
				//knight can travel ideally but will the
				//knight be able able to travel to these
				//boxes we don't know.
			}
		}
	}
}

void Knight(int x, int y, int count) {

	//variable ans stores the max boxes the knight is
	//able to travel in all the paths

	ans = max(ans, count);

	//count mujhe batata hain ki ek single path me kitne
	//boxes par main travel kar paaya.

	for (int i = 0; i < 8; i++) {
		int x_coordinate = x + dx[i];
		int y_coordinate = y + dy[i];

		if (x_coordinate >= 0 and x_coordinate<N and y_coordinate >= 0
		        and y_coordinate < N and
		        grid[x_coordinate][y_coordinate] == 1) {
			//grid me 1 ka matlab hain ki main us box ko
			//is single path me pehle kabhi visit nahi kiya hain.

			grid[x_coordinate][y_coordinate] = 0;
			//Ab is box ko visit karliya.

			Knight(x_coordinate, y_coordinate, count + 1);

			//this means maine ke path poori tarah se travese kar
			//karliya hain and ab jab maine path ek explore
			//karliya and count ka value nikal is path ke liye
			//toh ab main vapas grid ko uski original value par leaaunga
			//kyuki aisa hosakta hain ki main kisi aur path me travel kar
			//karte time is box par vapas se aajau.

			grid[x_coordinate][y_coordinate] = 1;

		}
	}
}

int main() {
	cin >> n;
	intput_grid();
	grid[0][0] = 0;//main maan ke chal raha hu ki 0,0
	//co ordinate hamesha solution me rahega.

	Knight(0, 0, 1);
	cout << Saare_One - ans << endl;
}