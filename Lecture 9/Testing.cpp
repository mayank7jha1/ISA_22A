#include<iostream>
#include "vector.h"
using namespace std;
// const int N = 0;
/*class vector {
	int current_size;
	int total_size;
	int *arr;

public:
	vector() {
		current_size = 0;
		total_size = 1;
		arr = new int[total_size];
	}

	void push_back(int d) {
		if (current_size == total_size) {
			int *oldArr = arr;
			arr = new int[total_size * 2];
			total_size = 2 * total_size;
			for (int i = 0; i < current_size; i++) {
				arr[i] = oldArr[i];
			}
			delete [] oldArr;
		}
		arr[current_size] = d;
		current_size++;
	}


	void pop_back() {
		current_size--;
	}


	int front() {
		return arr[0];
	}

	int back() {
		return arr[current_size - 1];
	}

	bool empty() {
		if (current_size == 0) {
			return true;
		} else {
			return false;
		}
	}

	int size() {
		return current_size;
	}

	int capacity() const {
		return total_size;
	}

	int at(int i) {
		return arr[i];
	}

	int operator[](int i) {
		return arr[i];
	}
};
*/
int main() {
	//Stl
	vector<string>v;

	v.push_back("mayank");
	v.push_back("Samyak");
	v.push_back("Ravi");

	cout << v[0] << " " << v[1] << " " << v[2] << endl;

	cout << v.empty() << endl;

	cout << v.capacity() << endl;
	cout << v.front() << endl;

	cout << v.back() << endl;
	cout << v.size() << endl;
}


