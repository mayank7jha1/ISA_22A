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

node*midPoint2(node* head) { //O(n)
	node* slow = head;
	node* fast = head;
	//node* fast = head->next;//if someone wants the first middle point.
	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}




bool searchIterative(node* head, int value) {
	node* temp = head;
	while (temp != NULL) {
		if (temp->data == value) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}

bool searchRecursive(node* head, int value) {
	node* temp = head;//O(n);//O(n);

	//Aapne kaha aapne har hode ke liye ek new temp banaya hain:
	//aapke pass n node hain and aapne n temp banaye isliye:
	//ek varaible ke liye O(1)space liya and n variable aapne
	//O(n) space liya:

	//Base Case:
	if (temp == NULL) {
		return false;
	}

	//Task:
	if (temp->data == value) {
		return true;
	} else {
		return searchRecursive(head->next, value);
	}
}

void ReverseLL(node* &head) {
	node* current = head;
	node* prev = NULL;
	node* n;

	while (current != NULL) {
		n = current->next;
		current->next = prev;

		prev = current;
		current = n;
	}
	head = prev;
}


void cycle_creation(node* head) {
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = head->next->next;
}



bool isCycle(node* head) {
	node* fast = head;
	node*slow = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			return true;
		}
	}
	return false;
}

void break_cycle(node* head) {
	node*fast = head;
	node* slow = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			break;//This gives me the meeting point of the cycle;
		}
	}

	//fast and slow pointer both are pointing to the meeting point.

	slow = head;
	node* prev = head;
	while (prev->next != fast) {
		prev = prev->next;
	}

	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
		prev = prev->next;
	}

	//fast and slow will be pointing to the origin of the cycle and
	//my prev pointer will be pointing to the last element;

	prev->next = NULL;//Hence my cycle breaks;
}

node *Reverse_Recursively(node* head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}


	node* next_head = Reverse_Recursively(head->next);
	node*c = head;
	c->next->next = c;
	c->next = NULL;
	return next_head;
}

void print(node* &head) {//Iterate over the ll
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL";
}



int main() {
	int n;
	cin >> n;
	//node *head = NULL;
	node* head1 = NULL;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		//x ko pehli linked list me add kardo
		//InsertAtHead(head, x);
		InsertAtTail(head1, x);
	}

	//print(head);//kaam khatam head =null
	//cout << endl;
	print(head1);
	cout << endl;
	/*cout << len(head) << " " << len(head1) << endl;
	cout << midPoint(head) << " " << midPoint(head1) << endl;
	cout << midPoint1(head)->data << " " << midPoint1(head1)->data << endl;*/
	/*cout << midPoint2(head1)->data << endl;
	cout << searchIterative(head, 150) << endl;
	cout << searchRecursive(head, 50) << endl;
	ReverseLL(head1);
	print(head1);
	cout << endl;
	cycle_creation(head1);
	cout << isCycle(head1) << endl;
	break_cycle(head1);
	cout << isCycle(head1) << endl;*/

	node* head2 = Reverse_Recursively(head1);
	print(head2);
	cout << endl;
}


