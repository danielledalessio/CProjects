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
int search(int item);
int main()
{
    //variables
    Node *current;
    Node *head;
    head = NULL;
    Nodeptr ptr;
    int sum, i;
    int item;

    //loop for linked list and sum
    for(i = 99; i>=0; i--){
        current = (Node *)malloc(sizeof(Node));
        current-> num = i;
        current-> next = head;
        head = current;
        sum += i;

        }

    current = head;

    //ask user for number
    printf("\n");
	printf("Enter item to be searched : ");
	scanf("%d",&item);

       while (current != NULL){// if we have a match
        if (current->num == item){
            printf("The number %d was found at node #%d\n",item, current->num);//print result
            return 0;
        }
        else // move to the next element
            current = current->next;
       }
}





