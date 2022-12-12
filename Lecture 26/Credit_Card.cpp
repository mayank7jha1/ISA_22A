#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
int n, d;
int a[100005] = {0};

void Solve() {
	int amount = 0;
	/*By default aisa toh nahi hain ki mera answer -1 aajaye:
	By default aisa to nahi hain ki irrespective of what i
	add or deposit and make my account balaance as the min non negative
	number possible even then my account balance exceed d.*/

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (amount < 0) {
				amount = 0;//Min possible account balance maintain kar raha hu
			}
		} else {
			amount += a[i];
			if (amount > d) {
				cout << "-1" << endl;
				return;
			}
		}
	}

	/*Agar you are standing at this line i.e. line no: 29:
	that mean the answer can never be -1.*/


	/*If i know my answer can never be -1 then i will
	assume that i have deposited that amount in my
	account that will never make my balance go beyond d.*/

	amount = 0;
	int visits = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (amount < 0) {
				visits++;
				amount = d;
			}
		} else {
			amount += a[i];
			if (amount > d) {
				amount = d;
			}
		}
	}
	cout << visits << endl;
}

int32_t main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Solve();
}




// -5 0 5 - 11 0


// /*1st Index: What is the maximum value you can create in your
// account: (Here I am not talking about the amount you are gonna
//           deposit, I am talking about the (largest )account balance that you can
//           have.)*/
// d = 10;
// account = -5(x);
// account = 10;

// account = 15;//NOw there is an issue: -1 account>d
// //Jo amount aapne add kiya tha i.e. +15 is wrong;
// //main ye kehta hu koi baat nahi: aap kya karo
// //aap jo hain is stage firse aisa maan lo ki jo amount pehle add
// //kiya th aapke account me usse aur this value 5 ko add karke
// //ab aapke account me maximum value bani hain.

// account = 15; (x);
// account = 10;
// /*(assume kar liya maine na jab main bank gaya tha
//               tab sirf Rs 10 daale the rather than 15.)*/

// /*
// 	Aap kabhi bhi after line 28 account me balance ko d se greater
// 	hota dekhte hain then aaap kya karo aap bas account
// 	balance ko maximum possible account balance bana do i.e
// 	account=d;
// */