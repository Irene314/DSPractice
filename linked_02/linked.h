
#ifndef __LINKED_H__
#define __LINKED_H__


struct Node {
    Node *next; // 指向下一個 node

    int data;   // 實際資料
};

// node.h


class Linked {
    public:
        Linked(int);
        ~Linked();

    public:
        void append_data(int);
        bool contain_data(int);
        void remove_data(int);
        void reverse_data(int);
        void merge_data(int);

    public:
        void dump_list();

    private:
        Node *head;
};

#endif

// linked.h
