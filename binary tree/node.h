class Node {
	public:
		Node *root();
		void addChild(Node *, Node *);
		void cut(Node *);
		void paste(Node *, Node *);
		void *search_breadth(Node *);
		void *search_preorder(Node *);
		void *search_inorder(Node *);
		void *search_postorder(Node *);

    public:
        int data;
		Node *left;
		Node *right;
};
