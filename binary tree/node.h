class Node {
	public:
		Node();
		~Node();

	public:
		Node *root();
		void addChild(Node *, Node *);
		void cut(Node *);
		void paste(Node *, Node *);
		Node *search_breadth(int);
		Node *search_depth_pre(int);
		Node *search_depth_in(int);
		Node *search_depth_post(int);

    public:
        int data;

	private:
		Node *left;
		Node *right;
};
