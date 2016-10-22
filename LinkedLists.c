//Danielle D'Alessio
//Homework 6

#include <stdio.h>
#include <stdlib.h>

//make structure statement and typedefs
struct node {
int num;
struct node * next;
};

typedef struct node Node;
typedef Node * Nodeptr;

//print function
void printresults(Nodeptr current);

int main()
{
    //variables
    Node *current;
    Node *head;
    head = NULL;
    Nodeptr ptr;
    int sum, i;

    //loop for linked list and sum
    for(i = 20; i>=0; i--){
        current = (Node *)malloc(sizeof(Node));
        current-> num = i;
        current-> next = head;
        head = current;
        sum += i;

        }

    current = head;

    //call function
    printresults(head);

    //print sum
    printf("\nThe sum of all nodes in the list is: %d\n", sum);

    return 0;
}

 void printresults(Nodeptr current){

        //loop for printing
        while(current!=NULL){
        printf("Node #%d: %d\n", current->num, current-> num);
        current = current-> next;
    }

 }
