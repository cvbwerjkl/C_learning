#include "fifo.h"
#include "tree.h"

int main() {
    printf("test\n");

    char s[] = "sklopjhgfhf";
    
    struct Tree* Root = root(s[0]);

    fill_tree(Root, s);

    print_tree(Root);

    free_tree(Root);

    return 0;
}
