#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
}*front=NULL, *rear=NULL;

void enqueue(int data) {
	printf("Inserting %d\n", data);
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL)
		printf("Queue is full.\n");
	else {
		newNode->data = data;
		newNode->next = NULL;
		if (front == NULL)
			front = rear = newNode;
		else {
			rear->next = newNode;
			rear = newNode;
		}
	}
}

int dequeue() {
	int x = -1;
	struct Node *temp;

	if (front == NULL)
		printf("Queue is empty.\n");
	else {
		x = front->data;
		printf("getting data: %d\n", x);
		temp = front;
		front = temp->next;
		free(temp);
	}
	return x;
}



int main() {
	printf("Inserting data....\n");
	enqueue(10);
	enqueue(12);
	enqueue(13);
	enqueue(14);
	printf("taking data.....\n");
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();

	return 0;
}