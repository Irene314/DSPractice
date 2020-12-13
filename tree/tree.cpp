#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *parent;
  Node *children;
};

Node *root_, *root_1, *n1, *n2, *n3, *n4, *n5;

int root() {
	cout << "root = " << root_->data << endl;
	return root_->data;
}

void addChild(Node *p, Node *n) {
	p->children = n;
	cout << p->data << " add a new child node: " << n->data <<endl;
}

void cut(Node *t) {
	root_1 = t;
	cout << "Cut a new child tree: " << t->data << endl; 
}

void paste(Node *n, Node *t) {
	n->children = root_1;
	cout << "Paste a child tree "<< t->data << " in " << n->data << endl;
}

int main() {
	/*設定樹的節點、賦值。*/  
	n1 = new Node;
	n1->data = 1;
	root_ = n1;
	n2 = new Node;
	n2->data = 2;  
	n3 = new Node;
	n3->data = 3;
	n4 = new Node;
	n4->data = 4;
	n5 = new Node;
	n5->data = 5;
	
	/*設定中間節點的親節點、子節點：
			n1
		  /   \
		n2	  n3
		/\		
	  n4  n5            */ 
	n1->children = n2; 
	n1->children = n3;
	n2->parent = n1;
	n3->parent = n1;
	n2->children = n4;
	n2->children = n5;
	n4->parent = n2;
	n5->parent = n2;
	n3->children = NULL;
	n4->children = NULL;
	n5->children = NULL;
	
	root();  //回傳根節點 
	addChild(n3,n5);  //設定 n5 為 n3 的子節點
	cut(n2);  //把 n2 設為子樹的根節點
	paste(n1, n2);  //把 n2 的子樹貼到 n1 上面
}
