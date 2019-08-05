#include<bits/stdc++.h>
using namespace std;


vector<int> left_view;
bitset<10> bset(0);


class Node {
public:
	int data;
	Node *left, *right;
	Node() {
		data = 0;
		left = right = NULL;
	}
};

void preorder(Node* root, int level) {
	if(root == NULL) return;
	if(!bset[level]) {
		left_view.push_back(root -> data);
		bset.set(level);
	}
	preorder(root -> left, level + 1);
	preorder(root -> right, level + 1);
}


int main() {
	int t, edges, parent, child;
	char dir;
	map<int, Node*> nodes;
	Node *root, *curr;
	root = new Node();
	cin >> t;
	while(t--) {
		cin >> edges;
		for(int edge = 0; edge < edges; edge++) {
			cin >> parent >> child;
			cin.ignore();
			cin >> dir;
			if(edge == 0) {
				root -> data = parent;
				nodes[parent] = root;
			}
			curr = new Node();
			curr -> data = child;
			if(dir == 'L') nodes[parent] -> left = curr;
			else nodes[parent] -> right = curr;
			nodes[child] = curr;
		}
		preorder(root, 0);
		for(auto data: left_view) cout << data << " ";
		cout << "\n";
		left_view.clear();
		bset.reset();
	}
	return 0;
}