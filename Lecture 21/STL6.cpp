#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool compare(pair<int, int>x, pair<int, int>y) {
	return x.second < y.second;
}

int main() {
	// std::cout << "Mayank";


	// pair<int, int>p;
	// make_pair(2, 3);



	// {4, 5};


	// pair<int, int>p = make_pair(2, 3);
	// pair<int, int>p1 = {4, 5};
	// cout << p1.first << " " << p1.second << endl;

	int n;
	cin >> n;

	vector<pair<int, int>>v;
	vector<pair<int, int>>v1;

	// input ko sort karo on the basis of first element and then second element

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({x, y});
		v1.push_back(make_pair(x, y));
	}


	//Iterator ke through print karvao
	//For each loop ke through bhi karvao


	sort(v.begin(), v.end());//By default vector ke ander container hain: sort stl ye sort karta hain on the basis of first element
	vector<pair<int, int>>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;

	sort(v1.begin(), v1.end(), compare);
	for (pair<int, int> x : v1) {
		cout << x.first << " " << x.second << endl;
	}



}



// cout / cin ye hota hain iostream ke ander hota hain.

//Std is also inside iotream


