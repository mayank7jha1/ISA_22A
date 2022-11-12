#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

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

	//2. Searching:
	//i.Binary Search  O(logn)
	//ii. lower_bound()
	//iii. upper bound()

	//binary search lagane ke liye search space should be sorted.

	sort(v.begin(), v.end(), less<int>());
	print(v);

	//Binary search syntax : kaha se lekar kaha tak search karna hain
	//and kisko karna hain.

	//binary search function returns true or false.

	bool check = binary_search(v.begin() + 1, v.end() - 2, 5);
	//1 2 2 3 4 5 5 x
	// from 4 to
	//v.end() is pointing to x: that means x-2:// postion ki baat kar raha hu
	//v.end()-2 is pointing at 5 (second last 5).

	//function: [first,second)

	// 2 2 3 4
	cout << check << endl;

	//lower bound function returns iterator: which abhi tak ke
	//knowledge ke hissab se can be considered as a address return karta hain


	//lower bound returns address of the first element which is
	//greater than or equal to, to the we are search for.

	//11 12 12 13 14 15 15

	//lower bound of 13: this function will return the address of
	//the first element which is equal to or greater than 13.

	//this will here return the address of the 4th block(taking the first
	//block as 1.)

	//since we are dealing with addresses be careful while printing them.


	cout << *(lower_bound(v.begin(), v.end(), 13)) << endl;

	//Because i am saying it returns an address for the sake
	//knowledge but in actuality it returns an iterator and
	//you cannot print an iterator directly.


	//Upper jo likha hain us syntax ka matlab kya hua:
	//ki mujhe lower bound ne ek iterator laake diya
	//which is similar to an address and when we are derefencing this
	//address we get the value at this address which will be 13.


	cout << lower_bound(v.begin(), v.end(), 12) - v.begin() << endl;


	//  11 12 12 13 14 15 15

	//In memory this will look like this:
	//Value ::::: Address
	//11    ::::: 8092
	//12    ::::: 8096
	//12    ::::: 8100
	//13    ::::: 8104

	//lower bound return kindof address so it can assumed that it returns
	//address of the block containing 13 i.e. 8104.

	//Formulae that means:::: 8104-8092== 12/4=3

	//Upper bound returns aapke liye address or iterator to the first block
	//which is strictly greater than the element you are searching for.

	cout << upper_bound(v.begin(), v.end(), 19) - v.begin() << endl;

	//in the case of 19 and the current input array if you apply
	//upper_bound it will return iterator or the address to the
	//block that is one step ahead of the last element i.e. v.end();

	cout << upper_bound(v.begin(), v.end(), 12) - lower_bound(v.begin(), v.end(), 12) << endl;
}


//Binary search ,lower_bound and upper_bound all of them works in
//O(logn) time complexity:


//Question::: lets say i want you to find me the occurrences of
//an element in O(log(n)) time and O(1) space.


//Queries to less than
//books lower and upper bound se karna:
