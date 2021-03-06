#include<bits/stdc++.h>
using namespace std;
struct Node {
	bool isEOW;
	Node* next[26];
	
	Node() {
		isEOW = false;
		for (int i=0;i<26;i++) next[i] = NULL;
	}
};
void insertWord(Node* root, string word){
	Node* temp = root;
	
	for (auto ch: word) {
		int idx = ch - 'a';
		if (temp->next[idx] == NULL) {
			temp->next[idx] = new Node();
		}
		temp = temp->next[idx];
	}
	temp->isEOW = true;
}

bool check(Node* root, string word) {
	Node* temp = root;
	
	for (auto ch: word) {
		int idx = ch - 'a';
		if (temp->next[idx] == NULL) {
			return false;
		}
		temp = temp->next[idx];
	}
	
	return (temp->isEOW == true);
}

void printAllWords(Node* root, vector<char>& path) {
	
	if (root->isEOW) {
		for (auto ch: path) cout << ch;
		cout << "\n";
	}
	
	for (int i =0;i<26;i++) {
		if (root->next[i] != NULL) {
			path.push_back(i + 'a');
			printAllWords(root->next[i], path);
			path.pop_back();
		}
	}
}

int main() {
	
	Node* root = new Node();
	
	insertWord(root, "apple");
    insertWord(root, "apply");
    insertWord(root, "application");
    insertWord(root, "zebra");
    insertWord(root, "car");
	vector<char> v;
	printAllWords(root, v);
	
	
	return 0;
}