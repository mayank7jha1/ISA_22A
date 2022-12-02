#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
// const int mayank = 10;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};


node* buildTree() {
	int x;
	cin >> x;

	if (x == -1) {
		return NULL;
	} else {
		node* root = new node(x);
		root->left = buildTree();
		root->right = buildTree();
		return root;
	}
}


void preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}


void inorder(node* root) {
	if (root == NULL) {
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}


int countnodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	int x = countnodes(root->left);
	int y = countnodes(root->right);
	int ans = x + y + 1;
	return ans;
}


int sumofNodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	int x = sumofNodes(root->left);
	int y = sumofNodes(root->right);
	int ans = x + y + root->data;
	return ans;
}

int height(node* root) {
	if (root == NULL) {
		return 0;
	}
	int left_subtree_height = height(root->left);
	int right_subtree_height = height(root->right);

	int ans = max(left_subtree_height, right_subtree_height) + 1;
	return ans;
}

//Diameter:
int diameter(node* root) {
	//O(n^2):  For every node aap height nikal rahe ho: O(n)
	//FOr every node aap O(n) ka kaam kar rahe ho:

	if (root == NULL) {
		return 0;
	}

	int option1 = diameter(root->left);
	int option2 = diameter(root->right);

	//Diameter passest through root
	int option3 = height(root->left) + height(root->right);

	// return max(max(option1, option2), option3);
	return max({option1, option2, option3});
}

//Fast height and Diameter Calculation: O(n):
//Kya main kisi tarah run time par height ko calculate kar sakta hu??
//While traversing the tree:

class Pair2 {
public:
	int height;
	int diameter;
};

// pair<int, int>fastdiameter(node* root) {

// }

Pair2 fastdiameter(node* root) {
	//O(n);
	Pair2 p;
	if (root == NULL) {
		p.height = 0;
		p.diameter = 0;
		return p;
	}

	Pair2 left_subtree = fastdiameter(root->left);
	Pair2 right_subtree = fastdiameter(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	int option1 = left_subtree.diameter;
	int option2 = right_subtree.diameter;
	int option3 = left_subtree.height + right_subtree.height;

	p.diameter = max({option1, option2, option3});
	return p;
}

class Pair3 {
public:
	int height;
	bool isbalanced;
};

Pair3 isheightbalanced(node* root) {
	Pair3 p;
	//O(n)
	if (root == NULL) {
		p.height = 0;
		p.isbalanced = true;
		return p;
	}

	Pair3 left_subtree = isheightbalanced(root->left);
	Pair3 right_subtree = isheightbalanced(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	if (left_subtree.isbalanced == 1 and right_subtree.isbalanced == 1 and
	        abs(left_subtree.height - right_subtree.height) <= 1) {
		p.isbalanced = true;
	}
	return p;
}

void mirror(node* root) {

	if (root == NULL) {
		return;
	}
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}


void printkthlevel(node* root, int k) {
	//Time COmplexity: O(n);
	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
		return;
		//Iske niche nahi jaana mujhe desired level
		//mil gaya hain.
	}

	printkthlevel(root->left, k - 1);
	printkthlevel(root->right, k - 1);
}


void printAllLevel(node* root) {
	//Time Complexity :: O(n^2);

	int H = height(root);
	for (int i = 1; i <= H; i++) {
		//for every level you are calling the kth level function:
		printkthlevel(root, i);
		cout << endl;
	}
}

void bfs(node* root) {
	queue<node*>q;
	q.push(root);

	while (!q.empty()) {
		node* first = q.front();
		q.pop();
		cout << first->data << " ";
		if (first->left != NULL) {
			q.push(first->left);
		}
		if (first->right != NULL) {
			q.push(first->right);
		}
	}
}

void bfs2(node* root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* first = q.front();
		if (first == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << first->data << " ";
			q.pop();
			if (first->left != NULL) {
				q.push(first->left);
			}
			if (first->right != NULL) {
				q.push(first->right);
			}
		}
	}
}


node* buildTreefromArray(int *a, int s, int e) {
	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;
	node* root = new node(a[mid]);
	root->left = buildTreefromArray(a, s, mid - 1);
	root->right = buildTreefromArray(a, mid + 1, e);

	return root;
}


node* buildTreefrompreandin(int *in, int *pre, int s, int e) {
	if (s > e) {
		return NULL;
	}

	static int i = 0;
	node* root = new node(pre[i]);

	int index = -1;
	for (int j = 0; j <= e; j++) {
		if (in[j] == pre[i]) {
			index = j;
			break;
		}
	}

	i++;

	root->left = buildTreefrompreandin(in, pre, s, index - 1);
	root->right = buildTreefrompreandin(in, pre, index + 1, e);
	return root;
}

void printLeftView(node* root, int level, int &maxlevel) {
	if (root == NULL) {
		return;
	}

	if (maxlevel < level) {
		cout << root->data << " ";
		maxlevel = level;
		//Is level tak main visit kar chuka hu!
	}

	printLeftView(root->left, level + 1, maxlevel);
	printLeftView(root->right, level + 1, maxlevel);
}

void printRightView(node* root, int level, int &maxlevel) {
	if (root == NULL) {
		return;
	}

	if (maxlevel < level) {
		cout << root->data << " ";
		maxlevel = level;
		//Is level tak main visit kar chuka hu!
	}

	printRightView(root->right, level + 1, maxlevel);
	printRightView(root->left, level + 1, maxlevel);

}


//User aapko bas value dega and aapko ek tree banana hain jo bst hain.
//stoping point is -1.



node* insertinbst(node* &root, int value) {
	if (root == NULL) {
		root = new node(value);
		return root;
	}

	if (value < root->data) {
		root->left = insertinbst(root->left, value);
	}
	if (value > root->data) {
		root->right = insertinbst(root->right, value);
	}
	return root;
}
node* buildbst() {
	int value;
	cin >> value;
	node* root = NULL;
	while (value != -1) {
		root = insertinbst(root, value);
		cin >> value;
	}
	return root;
}

bool searchinbst(node* root, int key) {
	if (root == NULL) {
		return false;
	}
	if (root->data == key) {
		return true;
	} else if (root->data > key) {
		return searchinbst(root->left, key);
	} else {
		return searchinbst(root->right, key);
	}
}


bool isbst(node* root, int min = INT_MIN, int max = INT_MAX) {
	if (root == NULL) {
		return true;
	}

	if ((root->data) > min and (root->data) < max and
	        isbst(root->left, min, root->data) == 1 and
	        isbst(root->right, root->data, max) == 1) {
		return true;
	}
	return false;
}

void printrange(node* root, int l, int r) {
	if (root == NULL) {
		return;
	}
	//Inorder: Traversal and check!!
	printrange(root->left, l, r);

	if (root->data >= l and root->data <= r) {
		cout << root->data << " ";
	}
	printrange(root->right, l, r);
}

// O(n); We have to check every node:
//O(log n)


int main() {
	// node* root = buildTree();
	// preorder(root);
	// cout << endl;
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;
	// cout << countnodes(root) << endl;
	// cout << sumofNodes(root) << endl;
	// cout << height(root) << endl;
	// cout << diameter(root) << endl;

	// Pair2 p = fastdiameter(root);
	// cout << p.height << " " << p.diameter << endl;

	// Pair3 p2 = isheightbalanced(root);
	// cout << p2.height << " " << p2.isbalanced << endl;
	// mirror(root);
	// cout << endl;
	// // preorder(root);
	// printkthlevel(root, 3);
	// cout << endl;
	// printAllLevel(root);
	// bfs(root);
	// cout << endl;
	// bfs2(root);

	// int pre[] = {8, 10, 1, 6, 9, 7, 3, 14, 13};
	// int in[] = {1, 10, 9, 6, 7, 8, 3, 13, 14};
	// node* root1 = buildTreefrompreandin(in, pre, 0, 8);
	// preorder(root1);
	// cout << endl;

	// //This is wrong
	// int maxlevel = -1;
	// printLeftView(root, 0, maxlevel);
	// cout << endl;
	// int maxlevel2 = -1;
	// printRightView(root, 0, maxlevel2);
	// cout << endl;

	// node* root = buildbst();
	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	int value;
	cin >> value;
	cout << searchinbst(root, value);
	cout << endl;
	bfs2(root);
	cout << isbst(root) << endl;
}




// recursion::: static int x = 2: local to that call;



// x = x + 1;

// int x = 2;

//left view :
//right view:


//BST::: (leetcode) and Maps and set:(Revise):


//Print rang