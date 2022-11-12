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
	cout << *max_element(v.begin(), v.end()) << endl;
	cout << *min_element(v.begin(), v.end()) << endl;
	//print(v);

	// v.resize(2 * n);//Isse vector ka size double ho jaayega
	// v.clear();
	// print(v);


	next_permutation(v.begin(), v.end());//Arrangement jo isse ek katam badi hain.
	print(v);
	prev_permutation(v.begin(), v.end());//Arrangement jo isse ke katam choti hain
	print(v);


	cout << distance(v.begin(), max_element(v.begin(), v.end())) << endl;;
	cout << accumulate(v.begin(), v.end(), 00) << endl;

	// vector<int>::iterator it = unique(v.begin(), v.begin() + 7);

	// for (it = v.begin(); it != v.end(); it++) {
	// 	cout << *it << " ";
	// }
	// cout << endl;

	// unique(v.begin(), v.end());
	// print(v);

	v.erase(unique(v.begin(), v.end()), v.end());//sorted array
	//Consecutive dublicate element ko remove kardiya:
	print(v);
}


//Jo bhi aapka vector hain usko reorder karta hain
//into the next lexographically arrangement;



