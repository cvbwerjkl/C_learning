#include "tree.h"

void add_right_leaf(struct Tree* par, const char rdata) {
    struct Tree* new_leaf = (struct Tree*)malloc(sizeof(struct Tree));
    new_leaf -> data = rdata;
    new_leaf -> left = new_leaf -> right = NULL;
    par -> right = new_leaf;
}