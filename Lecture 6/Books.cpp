#include<bits/stdc++.h>
using namespace std;
// const int N = 100005;

int main() {
	int n, time_provided;
	cin >> n >> time_provided;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int total_time_consumed = 0;
	int book_read = 0;

	int j = 0;

	/*for (int i = 0; i < n; i++) {
		total_time_consumed += a[i];
		book_read++;

		if (total_time_consumed > time_provided) {
			total_time_consumed = total_time_consumed - a[j];
			j++;
			book_read--;
		}
	}*/

	int i = 0;
	while (i < n) {
		total_time_consumed += a[i];
		book_read++;
		if (total_time_consumed > time_provided) {
			total_time_consumed = total_time_consumed - a[j];
			j++;
			book_read--;
		}
		i++;
	}
	cout << book_read << endl;
}




