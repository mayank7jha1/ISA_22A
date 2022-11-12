#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	vector<int>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	print(v);
	sort(v.begin(), v.end());
	print(v);

	//This rotates the array::
	//do bar left rotation
	rotate(v.begin(), v.begin() + 2, v.end());
	print(v);

	sort(v.begin(), v.end());

	//Teen bar right rotation
	rotate(v.begin(), (v.begin() + (v.size() - 5)), v.end());
	print(v);


	reverse(v.begin(), v.end()); //O(n)
	print(v);

	//v.erase(v.begin() + 2); //syntax hota hain mujhe iterator pass karna hain
	//jo erase karna hain.
	//print(v);

	//find function in a vector this function returns the
	//iterator to the element found and if the element
	//is not found then it returns the iterator to
	//the end.

	cout << find(v.begin(), v.end(), 19) - v.begin() << endl;

	v.erase(find(v.begin(), v.end(), 13));
	print(v);

	//Print all the unique elements in an array:


}

// Left              Right
// 11 12 12 13 14 15 15

//First rotation (left rotation)
//12 12 13 14 15 15 11
//Second left rotation
//12 13 14 15 15 11 12


//H.W: without stl rotate karna hain: toh kaise karenge??
//Left rotation:


// 1 2 3 4 5

//2 bar left rotation karo:
//2 3 4 5 1
//3 4 5 1 2


//3 bar right rotation:
//5 1 2 3 4
//4 5 1 2 3
//3 4 5 1 2


//1 2 3 4 5
//5 bar left rotate karna ho ya 5 bar right rotate karna ho???
//1 2 3 4 5