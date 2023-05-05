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
    if (pop(Fifo_head, &Fifo_tail, &tmp)) printf("%c\n", tmp);

    if (isEmpty(Fifo_head)) printf("Empty\n");
    else printf("Not Empty\n");

    char tmp2;
    if (pop(Fifo_head, &Fifo_tail, &tmp2)) printf("%c\n", tmp2);
    
    printf("End queue test\n");
   
    /*tree tests*/

    char s[] = "sklopjhgfhf";
    
    struct Tree* Root = root(s[0]);

    print_tree(Root);

    free_tree(Root);
    
    printf("End tree test\n");
        
    return 0;
}
