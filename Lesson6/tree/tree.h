#ifndef TREE_H_
#define TREE_H_

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>
#include <stdlib.h>

/*
 tree realization with linked list implementation
*/

struct Tree {
    char data;
    struct Tree* left;
    struct Tree* right;
};

/*adding left leaf to the tree*/
void add_left_leaf(struct Tree* par, const char ldata);

/*adding right leaf to the tree*/
void add_right_leaf(struct Tree* par, const char ldata);

/*print tree*/
void print_tree(struct Tree* root);

/*free tree*/
void free_tree(struct Tree* root);

#endif /* TREE_H_ */
