#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


void print(list<int>f) {
	for (auto it = f.begin(); it != f.end(); it++) {
		cout << (*it) << " ";
	}
	cout << endl;
}


int main() {
	list<int>l;

	l.push_back(10);
	l.push_back(20);
	l.push_back(50);
	l.push_front(15);
	print(l);
	// l.pop_front();
	// l.pop_back();
	l.reverse();
	print(l);
	l.sort();
	print(l);

	cout << l.front() << endl;
	cout << l.back() << endl;
}