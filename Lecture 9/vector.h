
template<typename T>


class vector {
	int current_size;
	int total_size;
	T *arr;

public:
	vector() {
		current_size = 0;
		total_size = 1;
		arr = new T[total_size];
	}

	void push_back(T d) {
		if (current_size == total_size) {
			T *oldArr = arr;
			arr = new T[total_size * 2];
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


	T front() {
		return arr[0];
	}

	T back() {
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

	T at(int i) {
		return arr[i];
	}

	T operator[](int i) {
		return arr[i];
	}
};