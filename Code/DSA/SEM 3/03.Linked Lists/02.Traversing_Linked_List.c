#include <stdlib.h>
#include <stdio.h>
struct node{
    int data;
    struct node *next;
};

void printList(struct node *n){
    printf("The Linked List is:");
    while (n != NULL)
    {
        printf(" %d", n->data);
        n = n->next;
    }
    printf("\n");
}

struct node *head = NULL; //Globally declared

int main(){

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data = 77;
    head->next = second;

    second->data = 78;
    second->next = third;

    third->data = 79;
    third->next = NULL;
    printList(head);
    return 0;
}