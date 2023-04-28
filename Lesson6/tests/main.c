#include "fifo.h"
#include "tree.h"

int main() {
    
    /*queue tests*/

    struct Item* Fifo_head = (struct Item*)malloc(sizeof(struct Item));
    struct Item* Fifo_tail = Fifo_head;
    Fifo_head -> next = NULL;
    
    if (isEmpty(Fifo_head)) printf("Empty\n");
    else printf("Not Empty\n");

    
    char c = 'f';
    Fifo_tail = push(Fifo_tail, c);
    printf("%c\n", Fifo_tail -> data);
    
    char tmp;
    if (pop(Fifo_head, Fifo_tail, &tmp)) printf("%c\n", tmp);
    

   
    /*tree tests*/
    
    struct Tree* Root = (struct Tree*)malloc(sizeof(struct Tree));
    Root -> data = 's';
    Root -> left = NULL;
    Root -> right = NULL;

    char a = 'a';

    add_left_leaf(Root, a);

    char b = 'b';

    add_right_leaf(Root, b);

    print_tree(Root);

    free_tree(Root);
        
    return 0;
}
