#include<iostream>
using namespace std;

class node {
public:
	int val;
	string key;
	// Seperate Chaining:
	node *next;

	// Constructor
	node(string k, int v) {
		val = v;
		key = k;
		next = NULL;
	}
};

class hashmap {
	node **table;
	int ts;
	int cs;

	void rehashing() {
		node** oldtable = table;
		int oldts = ts;
		table = new node*[2 * ts];
		ts = 2 * ts;
		cs = 0;
		for (int i = 0; i < ts; i++) {
			table[i] = NULL;
		}
		// Copy
		for (int i = 0; i < oldts; i++) {
			node *head = oldtable[i];
			while (head != NULL) {
				insert(head->key, head->val);
				head = head->next;
			}
		}
		delete []oldtable;
	}

	int hashfunction(string key) {
		int multiply = 1;
		int ans = 0;
		for (int i = 0; i < key.length(); i++) {
			ans += ((key[i] % ts) * (multiply) % ts) % ts;
			multiply = multiply * 29;
			multiply %= ts;
		}
		ans = ans % ts;
		return ans;
	}
public:
	// Constructor
	hashmap(int size = 7) {
		table = new node*[size];
		cs = 0;
		ts = size;
		for (int i = 0; i < ts; i++) {
			table[i] = NULL;
		}
	}

	void insert(string key, int value) {
		int hashindex = hashfunction(key);
		node *n = new node(key, value);
		cs++;
		// Insert At head link list:
		n->next = table[hashindex];
		table[hashindex] = n;
		//double load_factor=(double)(cs/ts*1.0);
		if ((cs / ts * 1.0) >= 0.7) {
			rehashing();
		}
	}

	node* search(string key) {
		int hashindex = hashfunction(key);

		node *head = table[hashindex];
		while (head != NULL) {
			if (head->key == key) {
				return head;
			}
			head = head->next;
		}
		return NULL;
	}

	void print() {
		for (int i = 0; i < ts; i++) {
			cout << i << "->";
			node* head = table[i];
			while (head != NULL) {
				cout << head->key << " ";
				head = head->next;
			}
			cout << endl;
		}
	}
};

int main() {
	hashmap m;
	m.insert("mango", 100);
	m.insert("abc", 200);
	m.insert("kiwi", 300);
	m.insert("banana", 80);
	m.insert("apple", 50);
	m.print();
}





