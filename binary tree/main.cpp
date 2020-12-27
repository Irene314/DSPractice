#include <iostream>

#include "node.h"

int main(int argc, char *argv[]) {
    Node tree;
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();
    Node *n5 = new Node();
    Node *n6 = new Node();
    Node *n7 = new Node();

    std::cout << "Please input node data: " << std::endl;
    std::cin >> n1->data >> n2->data >> n3->data >> n4->data >> n5->data >> n6->data >> n7->data;

    Node *root_ = n1;
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    n4->left = NULL;
    n4->right = NULL;
    n5->left = NULL;
    n5->right = NULL;
    n6->left = NULL;
    n6->right = NULL;
    n7->left = NULL;
    n7->right = NULL;

    tree.search_breadth(n1);
    std::cout<<std::endl;
    tree.search_preorder(n1);
    std::cout<<std::endl;
    tree.search_inorder(n1);
    std::cout<<std::endl;
    tree.search_postorder(n1);
} // main()

