#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


//link list is in stl as forward_list

void print(forward_list<int>f) {
	//you can iterate over a container only through iterators:
	for (auto it = f.begin(); it != f.end(); it++) {
		cout << (*it) << " ";
	}
	cout << endl;
}

int main() {
	forward_list<int>f;
	f.assign({11, 12, 13, 14, 15, 16, 17});
	//f.assign({15});
	print(f);

	//f.assign(15, 10);//First argument is size
	//second argument is element
	//print(f);

	forward_list<int>f1;
	f1.assign(f.begin(), f.end());
	print(f1);

	// vector<int>v = {1, 2, 3, 4, 5};
	// vector<int>a(v.begin(), v.end());

	// for (int i = 0; i < v.size(); i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	/*int v[] = {1, 2, 3, 4, 5};

	int n = sizeof(v) / sizeof(int);
	cout << n << endl;

	vector<int>a(v, v + n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	*/
	f.push_front(20);//Ye kaam kaise karta hain
	//ye kya karega pehle 20 ki ek copy banayega and the
	//usko ll me dalega this is not advisable (size (10^8))
	print(f);

	f.emplace_front(19);//ye directly daalta hain copy nahi banata
	print(f);

	f.pop_front();
	print(f);

	//emplace after
	//insert after
	//ye dono koi particular position ke baad element ko insert karne
	//me help karte hain.


	// f.insert_after(f.begin(), {1, 2, 3, 4, 5});
	// print(f);


	f.remove(15);
	print(f);

	f.clear();
	print(f);
}



//stl: <>