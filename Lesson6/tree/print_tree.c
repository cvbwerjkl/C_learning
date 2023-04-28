#include "tree.h"

void print_tree(struct Tree* root) {
    if (root != NULL) {
        printf("%c\n", root -> data);
        print_tree(root -> left);
        print_tree(root -> right);
    }
}
