#include "tree.h"

void free_tree(struct Tree* root) {
    if (root != NULL) {
        free_tree(root -> left);
        free_tree(root -> right);
        free(root);
    }
}
