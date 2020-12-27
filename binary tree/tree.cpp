#include <iostream>

#include "node.h"

Node::Node() {

}

Node::~Node() {

}

Node *Node::root(){
    Node *root_ = new Node();
    return root_;
}

void Node::addChild(Node *p, Node *n){

}

void Node::cut(Node *t){

}

void Node::paste(Node *n, Node *t){

}

Node *Node::search_breadth(int data){

}

Node *Node::search_depth_pre(int data){

}

Node *Node::search_depth_in(int data){

}

Node *Node::search_depth_post(int data){

}
