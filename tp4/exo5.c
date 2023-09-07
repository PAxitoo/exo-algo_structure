
#include <stdio.h>
#include <stdlib.h>


typedef struct s_cellule_t
{
int val; // valeur
struct s_cellule_t* suiv; // suiv
} cellule_t;


void insererTriee(int val,cellule_t** li)
{
	struct Node* current;

	if (*li == NULL
		|| (*li)->val
			>= new_node->data) {
		new_node->next = *li;
		*li = new_node;
	}
	else {

		current = *head_ref;
		while (current->next != NULL
			&& current->next->data < new_node->data) {
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}


struct cellule_t* newNode(int new_val)
{
	/* allocate node */
	struct cellule_t* new_node= (struct cellule_t*)malloc(sizeof(struct cellule_t));

	/* put in the data */
	new_node->val = new_val;
	new_node->suiv = NULL;

	return new_node;
}

void printList(struct cellule_t* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
	struct Node* head = NULL;
	struct Node* new_node = newNode(5);
	sortedInsert(&head, new_node);
	new_node = newNode(10);
	sortedInsert(&head, new_node);
	new_node = newNode(7);
	sortedInsert(&head, new_node);
	new_node = newNode(3);
	sortedInsert(&head, new_node);
	new_node = newNode(1);
	sortedInsert(&head, new_node);
	new_node = newNode(9);
	sortedInsert(&head, new_node);
	printf("\n LIste crée\n");
	printList(head);

	return 0;
}
