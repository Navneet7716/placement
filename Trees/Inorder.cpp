/*
In-Order Traversal
*/

#include<bits.stdc++.h>

using namespace std;

void inorderRec(Node* root) {

	if (root == NULL) return;

	inorderRec(root->left);
	cout << root->data << " ";
	inorderRec(root->right);
}

void inorderIter(Node* node) {

	stack<Node*> st;

	while(!stack.empty() || node != NULL) {

		if(node) {
			stack.push(node);
			node = node->left;
		}
		else {
			cout << st.top()->data;
			st.pop();
			node = node->right;
		}
	}

}