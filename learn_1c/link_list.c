#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int value;
	struct Node* next;
	} node;
	
int main()
{
	node* head = NULL;
	node* one = NULL;
	node* two = NULL;
	node* three = NULL;
	node* four = NULL;
	
	//allocate four nodes
	head = (node*)malloc(sizeof(node));
	one = (node*)malloc(sizeof(node)); 
	two = (node*)malloc(sizeof(node)); 
	three = (node*)malloc(sizeof(node)); 
	four = (node*)malloc(sizeof(node)); 
	
	//assign values
	head->value = 0;
	one->value = 1;
	two->value = 2;
	three->value = 3;
	four->value = 4;
	
	//connect nodes
	head->next = one;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;
	
	//print the linked_list value
	while (head != NULL) {
	printf("%d\n", head->next);
	head = head->next;
	}
	return 0;
}
