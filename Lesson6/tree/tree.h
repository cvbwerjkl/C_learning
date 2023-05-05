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

/*adding root to the tree*/
struct Tree* root(const char rootdata);

/*adding left leaf to the tree*/
void add_left_leaf(struct Tree* par, const char ldata);

/*adding right leaf to the tree*/
void add_right_leaf(struct Tree* par, const char rdata);

/*print tree*/
void print_tree(struct Tree* root);

/*free tree*/
void free_tree(struct Tree* root);

/*fill in tree by array of chars c*/
void fill_tree(struct Tree* root, char c[]);

#endif /* TREE_H_ */
