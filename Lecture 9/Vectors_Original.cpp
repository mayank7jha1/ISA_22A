#include<iostream>
#include<vector>
using namespace std;
// const int N = 0;

int Solve(vector<int>&a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	int n;
	cin >> n;

	//Syntax for any container:
	vector<int>v(n, -1);//ye array of size n ko -1 sabko

	for (int i = 0; i < n; i++) {
		/*int x;
		cin >> x;
		v.push_back(x);
		*/
		cin >> v[i]; //this is wrong
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;


	//Vector ka size is not defined na/

	//since size define nahi hain: toh cin nahi
	//karsakte directly but jab element aachuke hain
	//vector me toh cout kar sakte ho!


	cout << v.size() << endl;
	cout << v.back() << endl;
	cout << v.front() << endl;

	v.pop_back();
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	cout << Solve(v);


	// sort(a, a + n);


	sort(v.begin(), v.end());//increasing

	/*int a[] = {1, 2, 3, 4, 5};

	sort(a, a + 5);

	a,a+5-->sort:  a+0 a+1 a+2 a+3 a+4*/

	reverse(v.begin(), v.end());

	sort(v.rbegin(), v.rend());//decr.

}


// 0 1 2 3 4 5


// v.end()-->5 ke ek kadam aage: