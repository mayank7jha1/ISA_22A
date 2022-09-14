#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int maxArea(int height[], int n) {
	int area = 0;
	int n = height.size();
	int j = n - 1;
	for (int i = 0; i <= j;) {
		area = max(area, min(height[i], height[j]) * (j - i));
		if (height[j] > height[i]) {
			i++;
		} else {
			j--;
		}
	}
	return area;
}
int main() {
	int n;
	cin >> n;
	int height[n];
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}
	cout << maxArea(height, n) << endl;

}

//1 2 3 4
/*3 2 1 6


// 3 and 6 height vaali wall ko compare kiya:
// 3 toh 3 vaali wall ka contribution kitna hain:
// 3 - 6 ke bich ka distance and min height;
// i++;/

1 2 3 4
6 2 1 3


6 aur 3 , 3 ka na : contru nikal lo:
j--;
*/


// 1 2 3 4:

// i---->     jab i aur j intersect karjaaye   <------j