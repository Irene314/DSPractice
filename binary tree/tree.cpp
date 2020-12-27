#include <iostream>

#include "node.h"

Node::Node() {
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();
    Node *n5 = new Node();
    Node *n6 = new Node();
    Node *n7 = new Node();
    std::cin >> n1->data >> n2->data >> n3->data >> n4->data >> n5->data >> n6->data >> n7->data;

    Node *root_ = n1;
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
}

Node::~Node() {

}

Node *Node::root(){
    Node *root_ = new Node();
    return root_;
}

void Node::addChild(Node *p, Node *n){
    if(n->data > p->data)
        p->right = n;
    else
        p->left = n;
}

void Node::cut(Node *t){
    Node *root_1 = new Node();
    root_1 = t;
}

void Node::paste(Node *n, Node *t){
    Node *root_1 = new Node();
    root_1 = t;
    if(t->data > n->data)
        n->right = t;
    else
        n->left = t;
}

void *Node::search_breadth(Node *p){

}

void *Node::search_preorder(Node *p){
    if(p) {
        std::cout << p->data << " ";
        search_preorder(p->left);
        search_preorder(p->right);
    }
}

void *Node::search_inorder(Node *p){
    if(p) {
        search_inorder(p->left);
        std::cout << p->data << " ";
        search_inorder(p->right);
    }
}

void *Node::search_postorder(Node *p){
    if(p) {
        search_postorder(p->left);
        search_postorder(p->right);
        std::cout << p->data << " ";
    }
}
