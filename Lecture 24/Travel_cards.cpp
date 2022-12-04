#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int Travel_Cards() {
	int n, a, b, k, f;
	cin >> n >> a >> b >> k >> f;

	map<pair<string, string>, int>m;//JOurney(ek pair hain) and cost

	string prev_dest = "";
	for (int i = 0; i < n; i++) {
		string start_point, ending_point;
		cin >> start_point >> ending_point;
		int price;

		if (prev_dest == start_point) {
			//THis is a transhipment:
			price = b;
		} else {
			price = a;
		}
		prev_dest = ending_point;

		if (start_point > ending_point) {
			swap(start_point, ending_point);
		}

		if (m.find({start_point, ending_point}) != m.end()) {
			m[ {start_point, ending_point}] += price;
		} else {
			m[ {start_point, ending_point}] = price;
		}
	}


	vector<int>v;
	int total_cost = 0;

	for (auto x : m) {
		v.push_back(x.second);
		total_cost += x.second;
	}


	sort(v.rbegin(), v.rend());

	for (int i = 0; i < k; i++) {
		if (v[i] >= f) {
			total_cost = total_cost - v[i] + f;
		} else {
			break;
		}
	}
	return total_cost;
}



int main() {
	cout << Travel_Cards() << endl;
}



//4 questions::::Map
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
//https://leetcode.com/problems/longest-consecutive-sequence/description/
// https://leetcode.com/problems/encrypt-and-decrypt-strings/
// https://leetcode.com/problems/count-subarrays-with-median-k/

//Trees::
//3 questions::: LCA, Vertical Print,Kth node,Tree Camera



// Question Bank:

// List of Topics: Banao:

//Arrays
//Strings
//LL
//Trees
//Map
//Queue


// Weekdays::
//weekend should be light:: daily displine:


//Revison:: Daily Target:::: 6 hours::  4 hours to DSA and 2 HOurs to my Web:
//MOnth of December:

//Target: Time :::: 8 Question daily Target:

//4 and 4 Questions:

//4 Questions  in One Sitting:
//4 Questions in One Sitting:



//First 4 questions:: Active rehte ho::
//Array: Challenging task :: Aap Difficult questions uthao and try to solve them
//2 HOurs:: 2 Problem jo aapko challenge kare:: Target 2 hours se jada nahi karna
//I want to finish a question in half a hour::

//Appne jo question:: Solve and Solution and try to solve them.

//SHeet maintian karo:: arrays::  Question:: Green if was done easily
//Orange if it was done by you easily but it can be solved using a different concept;(column Write the concept)
//Red : i Was not able to solve this. (Hint)(Concept)




//Second Half (2hours ka hain::)

//Jo aapne pehle se kar rakha hain: usme se randomly without any topic aap questions uthao
//prefer red first. then orange last me green.


//3rd Half (One HOur):: Here i will not solve any problem learn about a concept:
//Two pointer :: ek question ki video dekho



//Target: 150 Problems:(IN A MONTH) (Dsa with revision:)
//YOu are good to go!!!.


//6 hours::

//Wake up early : breakfast: karo and excercise karo::
//2 hours ki sitting karo::
//7:30:: 8:30:: 9:00 10:00 excersise karo 10:00:: (10-12)::

// sone jaye:: 4-7 study time:(Revision)
//Enjoyment:  Class::9-11: Development:

//11 baje free 11-1 entertainment:

//Weekend hota:: Questions :: Contests::
//COntest do and contest dene ke baad 2 problems upsolve karo and sheet me update karo!
//2 din me aapko kam se 4 contest dene chahiye :
//ek subhah ek raat:
//weekday:: contest:: 2 question 2 question research:
//day :: 8 problem:


//MOnth 150 problems:: revision:: consi.

//Time table is imp::
//KONSE LOG SABSE JADA ENJOY KARTE HAIN:: JO apna kaam ache se karte hain.

//Kisi bache 10,11 12 hard life compar:: assan
//Person a : person b:
//3iit d:::: person b: abc:

//dono amount of effort::
//person b ko beat karna hain person a;



//Top company:
//Life me sirf coding nahi ho!!
//It is never tooo late:
//It is always a good time to start.


//effort:

//Displine ::
