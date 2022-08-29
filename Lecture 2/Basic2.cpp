#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;


	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int pre[n + 1] = {0};
	int x, y, d;
	cin >> x >> y >> d;

	//pre[] = {0, 0, 0, 0, 0, 0};


	pre[x] = 10;
	pre[y + 1] = -10;

	//pre[] = {0, 0, 10, 0, 0, -10};

	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + pre[i];
	}

	//pre[1]=pre[0]+pre[i];
	/*
		pre[1]=0+0;

	*/

	//pre[]={0,0,10,10,10,0};


	for (int i = 0; i < n; i++) {
		pre[i] = pre[i] + a[i];
	}


	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
}
