#include "tree.h"

void fill_tree(struct Tree* root, char c[]) {
    size_t c_array_size;
    size_t tree_depth;
    int32_t tmp1;
    int32_t tmp2;
    int32_t i;
    size_t j;
    struct Tree* tmp_leafs_array[128]; /*need to be replace by dynamic memory*/
    struct Tree* tmp2_leafs_array[128]; /*need to be replace by dynamic memory*/
    
    c_array_size = 11;
    
    /*tree depth evaluation*/
    tmp1 = c_array_size - 1;
    tmp2 = 2; // first tree level leafs amount
    tree_depth = 0;
    while (tmp1 > 0) {
        tmp1 -= tmp2;
        tmp2 *= 2;
        ++tree_depth;
    }

    printf("tree depth %ld\n", tree_depth);

    /*tree_filling*/
    tmp1 = 1;
    j = 1;
    tmp_leafs_array[0] = root;

    while (tree_depth > 0) {
        tmp2 = 0;
        for (i = 0; i < tmp1; ++i) {
            
            if (c[j] != '\0') {
                add_left_leaf(tmp_leafs_array[i], c[j]);
                printf("add leaft leaf %c on depth leavel %ld\n", tmp_leafs_array[i] -> left -> data, tree_depth);
                tmp2_leafs_array[tmp2] = tmp_leafs_array[i] -> left;
                ++tmp2;
                ++j;
            }
            else return;

            if (c[j] != '\0') {
                add_right_leaf(tmp_leafs_array[i], c[j]);
                printf("add leaft leaf %c on depth leavel %ld\n", tmp_leafs_array[i] -> right -> data, tree_depth);
                tmp2_leafs_array[tmp2] = tmp_leafs_array[i] -> right;
                ++tmp2;
                ++j;
            }
            else return;
        }
        for (i = 0; i < tmp2; ++i) {
            tmp_leafs_array[i] = tmp2_leafs_array[i];
        }
        tmp1 *= 2;
        tree_depth -= 1;  
    }

    return;
}
