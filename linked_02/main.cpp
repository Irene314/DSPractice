
#include "linked.h"
#include "test_linked.h"

int main(int argc, char *argv[]) {
    Linked linked{10};
    Linked linkedL{9};
    Linked linkedM{11};
    TestLinked test;

    linked.dump_list();

 //   test.test_append_data();
 //   test.test_contain_data();
 //   test.test_remove_data();
 //   test.test_reverse_data();
    test.test_merge_data();
} // main()

// main.cpp
