#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	unordered_map<int, int>m;
	//pair kaise banate hain?
	//map ke ander ek element ek pair hain
	//container iske kuch functions honge!!
	//make_pair(x,y);
	//{}
	unordered_map<int, int>m1;
	int sum = 0;
	for (int i = 1; i <= 6; i++) {
		sum += 97;
		m.insert(make_pair(i, sum));
		m.insert({i, sum});
	}
	m.insert({0, 153});

	for (pair<int, int> x : m) { //For every element that is inside map
		cout << x.first << " " << x.second << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}

	//Questiion : saare functions:
	//map container:: c++ reference:
	//unoredered_map:: find, count,empty:
}


//Interview:: Hashing function:

//three digit prime number
//values ko uski power me:


//modulus:

// // prime number 117;
// //prime number  119

// mayank:    hash function::: (117 ^ 1 * (m)) % 119+(117 ^ 2 * (a))(119 ^ 2)------------------
// usually::: this will create you unique values: map:
// //codeforces: hash function: