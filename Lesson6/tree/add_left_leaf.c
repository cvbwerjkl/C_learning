#include "tree.h"

void add_left_leaf(struct Tree* par, const char ldata) {
    struct Tree* new_leaf = (struct Tree*)malloc(sizeof(struct Tree));
    new_leaf -> data = ldata;
    new_leaf -> left = new_leaf -> right = NULL;
    par -> left = new_leaf;
}
