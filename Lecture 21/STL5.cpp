#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

//STL containers: iterate karna ho:: for loop





int main() {
	int n;
	cin >> n;
	vector<int>v;

	for (int i = 0; i < n; i++) {
		//cin >> v[i];
		int x;
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	//Iterators:

	//Iterator ek sub class jo aapki container class ke ander hain:


	// vector<int>::iterator it;

	cout << endl;

	for (auto it = v.begin(); it != v.end(); it++) {
		cout << (*it) << " ";
	}

	cout << endl;
	//For each : indexing nahi chahiye hoti:
	//Saare element ki requirement:

	for (int x : v) {
		//For every element of x which is inside v aap kuch kaam karna chahte ho:
		cout << x << " ";
	}



}



// ((pointers) + functionality)


