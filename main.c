//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,d,e,*head ;
    a.value = c;
    e.next=&a;
    a.next=&b;
    b.next=&d;
    head=&e;
    e.value= c-3;
    b.value=head->next->value+3;
    d.value=head->next->next->value+3;
    d.next = NULL;

    
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    // printf("%d\n", head ->value ); //what value for 2
    // printf("%d\n", head ->next->value ); //what value for 5
    // printf("%d\n\n", head ->next->next->value ); //what value for 8

/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2) 
*/
    // printf("%d\n", head ->value ); //what value for 2
    // printf("%d\n", head ->next->value ); //what value for 5
    // printf("%d\n", head ->next->next->value ); //what value for 8
    // printf("%d\n\n", head ->next->next->next->value ); //what value for 11

    typedef struct node* NodePtr;
    head = (NodePtr)malloc(sizeof(struct node));
    NodePtr tmp=head;
    head->value = 0;
    //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
    */
    // int i,n=4;
    //     for(i=0;i<n;i++){
    //         printf("%3d", tmp->value);
    //       tmp = tmp->next;
    //     }
    //     printf("\n");
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
    */
    // tmp = head;
    // while(tmp != NULL){
    //         printf("%3d", tmp->value);
    //         tmp = tmp->next;
    //     }
    //     printf("\n");
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
    for(int i=0;i < 3;i++){
            tmp->next = (NodePtr)malloc(sizeof(struct node));
            tmp = tmp->next;
            tmp->value = i+3;
            tmp->next = NULL;
        }

    for(tmp = head;tmp != NULL;tmp = tmp->next){
            printf("%3d", tmp->value);
            
        }
        printf("\n");

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
     tmp = head;
    while(tmp != NULL){
        tmp = tmp->next;
        free(head);
        head = tmp;
    }
    return 0;
}
