#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <memory.h>
typedef char string[100];
//Somesh Fengade 10 Comps
typedef struct node { 
	string data; 
	int priority; 
	struct node* next; 
} Node; 
Node* newNode(string d, int p) 
{ 
	Node* temp = (Node*)malloc(sizeof(Node)); 
    strcpy(temp->data,d);
	temp->priority = p; 
	temp->next = NULL; 
	return temp; 
} 
int Display(Node** head) 
{ 
	return ((*head)->data); 
} 
void Deque(Node** head) 
{ 
	Node* temp = *head; 
	(*head) = (*head)->next; 
	free(temp); 
} 
void enter(Node** head, string d, int p) 
{ 
	Node* start = (*head); 
	Node* temp = newNode(d, p); 
	if ((*head)->priority > p) { 
		temp->next = *head; 
		(*head) = temp; 
	} 
	else { 
		while (start->next != NULL && 
			start->next->priority <= p) { 
			start = start->next; 
		} 
		temp->next = start->next; 
		start->next = temp; 
	} 
} 
int isEmpty(Node** head) 
{ 
	return (*head) == NULL; 
}  
int main() 
{ 
	Node* pq = newNode(" ", 0); 
    int x=0;
    string sx;
    int prio;
    while(x!=5){
        printf("enter the person's name");
        scanf("%s", &sx);
        printf("enter the priority");
        scanf("%d", &prio);
        enter(&pq, sx,prio);
        printf("enter 5 to exit or any no to continue");
        scanf("%d", &x);
    }
if(x==5){while (!isEmpty(&pq)) { 
		printf("%s\n", Display(&pq)); 
		Deque(&pq); 
	} }

	return 0; 
} 
