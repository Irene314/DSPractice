#include <iostream>
#include <queue>
#include "node.h"

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

void Node::search_breadth(Node *p){
    std::queue <Node*> que;
    que.push(p);
    while (!que.empty()){
        std::cout << que.front()->data << " ";
        if (que.front()->left != NULL)
            que.push(que.front()->left);
        if (que.front()->right != NULL)
            que.push(que.front()->right);
        que.pop();
    }
}

void Node::search_preorder(Node *p){
    if(p != NULL){
        std::cout << p->data << " ";
        search_preorder(p->left);
        search_preorder(p->right);
    }
}

void Node::search_inorder(Node *p){
    if(p != NULL){
        search_inorder(p->left);
        std::cout << p->data << " ";
        search_inorder(p->right);
    }
}

void Node::search_postorder(Node *p){
    if(p != NULL){
        search_postorder(p->left);
        search_postorder(p->right);
        std::cout << p->data << " ";
    }
}
