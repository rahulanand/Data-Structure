#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void push(struct Node **top, int data) {
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	if (new_node == NULL) {
		printf("Stack overflow.\n");
		return;
	}
	if (*top == NULL) {
		new_node->data = data;
		new_node->next = NULL;
		*top = new_node;
	}
	else {
		new_node->data = data;
		new_node->next = *top;
		*top = new_node;
	}
}

int pop(struct Node **top) {
	int x = -1;
	struct Node *temp;
	if (*top == NULL) {
		printf("Stack Downflow.\n");
	}
	else {
		temp = *top;
		x = temp->data;
		*top = temp->next;
		free(temp);
	}
	printf("POP DATA: %d \n", x);
	return x;
}


int main() {
	struct Node *stack;
	push(&stack, 5);
	push(&stack, 4);
	push(&stack, 3);
	push(&stack, 2);
	pop(&stack);
	pop(&stack);
}