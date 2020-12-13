#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *parent;
  Node *children;
};

Node *root_, *n1, *n2, *n3, *n4, *n5;

int root() {
	return root_->data;
}

void addChild(Node *p, Node *n) {
	*p -> children = *n;
}

void cut(Node *t) {
	*root_ = *t;
}

void paste(Node *n, Node *t) {
	*n -> children = *root_;
}

int main() {
	n1 = new Node;
	n1 -> data = 1;
	root_ = n1;
	n2 = new Node;
	n2 -> data = 2;  
	n3 = new Node;
	n3 -> data = 3;
	n4 = new Node;
	n4 -> data = 4;
	n5 = new Node;
	n5 -> data = 5;
	  
	n1 -> children = n2;
	n1 -> children = n3;
	n2 -> parent = n1;
	n3 -> parent = n1;
	  
	n2 -> children = n4;
	n2 -> children = n5;
	n4 -> parent = n2;
	n5 -> parent = n2;
	
	n3 -> children = NULL;
	n4 -> children = NULL;
	n5 -> children = NULL;
}
