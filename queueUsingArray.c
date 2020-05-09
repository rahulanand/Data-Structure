#include <stdio.h>
#include <stdlib.h>

struct Queue {
	int size;
	int front;
	int rear;
	int *q;
};

void enqueue(struct Queue *queue, int data) {
	if (queue->rear == queue->size-1) {
		printf("Queue is Full.\n");
	}
	else {
		queue->q[queue->rear++] = data;
	}
}

void dequeue(struct Queue *queue) {
	printf("dequeuing....\n");
	int x = -1;
	if (queue->rear == queue->front) {
		printf("Queue is full.");
	}
	else {
		x = queue->q[queue->front++];
		printf("Got %d from Queue.\n", x);
	}
}


int main() {
	struct Queue queue;
	queue.front = -1;
	queue.rear = -1;
	int data;
	printf("Enter size of queue.\n");
	scanf("%d", &queue.size);
	queue.q = (int *)malloc(queue.size * sizeof(int));
	for (int i=0; i<queue.size+1; i++) {
		printf("Enter element to Insert.\n");
		scanf("%d", &data);
		enqueue(&queue, data);
	}
	dequeue(&queue);
	dequeue(&queue);
	
}