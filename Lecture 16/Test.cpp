#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* next;//Self referencing Pointer

	//Constructor

	node(int inputdata) {
		data = inputdata;
		next = NULL;
	}
};


void InsertAtHead(node* &head, int value) {
	node* n = new node(value);
	n->next = head;
	head = n;
}
void InsertAtTail(node* &head, int value) {
	if (head == NULL) {
		// node* n = new node(value);
		// head = n;

		head = new node(value);
		return;
	}

	//I want to reach the last node:

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	//ab main temp ke karan aakhari node ka
	//info jaanta hu;
	// node* n = new node(value);
	// temp->next = n;
	temp->next = new node(value);
	return;
}

int len(node* &head) {
	node* temp = head;//Initialise
	int length = 0;
	while (temp != NULL) {//stoping condition
		length++;
		temp = temp->next;//i++
	}
	return length;
}


int midPoint(node* head) {
	int mid = len(head) / 2;

	node* temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp->data;
}


node* midPoint1(node* head) {
	int mid = len(head) / 2;

	node* temp = head;
	while (mid > 0) {
		temp = temp->next;
		mid--;
	}
	return temp;
}


void print(node* &head) {//Iterate over the ll
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
}



int main() {
	int n;
	cin >> n;
	node *head = NULL;
	node* head1 = NULL;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		//x ko pehli linked list me add kardo
		InsertAtHead(head, x);
		InsertAtTail(head1, x);
	}

	print(head);//kaam khatam head =null
	cout << endl;
	print(head1);
	cout << endl;
	cout << len(head) << " " << len(head1) << endl;
	cout << midPoint(head) << " " << midPoint(head1) << endl;
	cout << midPoint1(head)->data << " " << midPoint1(head1)->data << endl;
}


// 10 20 30 40 50
// koi bhi link list bana do


/*mid point ko find time complexity: O(n);

O(2 * n)~~ O(n);

Because i have iterated over the ll twice;
length and ek mid point tak jaane ke liye kiya:



single iteration me mid point laake do:*/