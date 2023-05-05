#include "tree.h"

struct Tree* root(const char rootdata) {
    struct Tree* root = (struct Tree*)malloc(sizeof(struct Tree));
    root -> data = rootdata;
    root -> left = root -> right = NULL;
    return root;
}
