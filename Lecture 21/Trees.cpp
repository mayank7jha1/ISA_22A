#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

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

int main() {
	node* root = buildTree();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << countnodes(root) << endl;
	cout << sumofNodes(root) << endl;
	cout << height(root) << endl;
	cout << diameter(root) << endl;

	Pair2 p = fastdiameter(root);
	cout << p.height << " " << p.diameter << endl;

	Pair3 p2 = isheightbalanced(root);
	cout << p2.height << " " << p2.isbalanced << endl;
}

