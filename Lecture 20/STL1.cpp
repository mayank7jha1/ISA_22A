#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void print(vector<int>&v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

bool compare(int x, int y) {
	//Whenever the comparator return true that means you don't have to
	//swap if you imagine your sort function as bubble sort
	//This means if the compartor for the particular 2 elements returns
	//true that means it will not swap them and hence their position
	//in the container will not change with respect to each other.
	return x > y;
}


template<typename T>

class Comparator {
public:
	bool operator()(T x, T y) {
		return x > y;
	}
};

template<class T> bool Comparator2(T x, T y) {
	return x > y;
}

int main() {
	int n;
	cin >> n;
	vector<int>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	print(v);

	//Algorithms: Which are in your template Class:

	//1. Sort

	//Functionality to sort an container://Data Structure

	//Syntax()

	//.begin() ek function template class ke ander which returns an
	//iterator to the beginning of the container.
	//Abhi ke liye aapke liye ek pointer/address ki tarah samaj lo:

	//.end(): returns iterator to the next element to  last element:

	//.begin()::::: first element
	//.end()::::: last element ke ek khatam aage:

	sort(v.begin(), v.end()); //Function me 3 arguments jaasakti hain at max:
	print(v);

	//sort(v.begin(), v.end(), compare);//Third argument is function ka name:
	//function ke ander ek function argument ke tarah jaaraha hain.

	//print(v);

	//C++ me  aapke pass 4 comparator already present hote hain;

	//sort(v.begin(), v.end(), greater<int>());
	//print(v);

	// sort(v.begin(), v.end(), Comparator<int>());
	// print(v);

	sort(v.begin(), v.end(), Comparator2<int>);
	print(v);
}



//stl: function [first_argument, last_argument);

//sort function hota hain uske ander teesra option hain
//comparator://kis tarah ke comparison se aap sort karna chahte ho.


// greater<int>();
//less<int>
//less_equal<int>
//greater_equal<int>
