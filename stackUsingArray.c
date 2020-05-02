#include <stdio.h>
#include <stdlib.h>

/*
	Stack Implementation using array.
	LIFO
*/

struct Stack {
	int size;
	int top;
	int *arr;
};

void push(struct Stack *st, int num) {
	if (st->top == st->size) {
		printf("Stack overflow.\n");
		return;
	}
	else {
		st->top++;
		st->arr[st->top] = num;
		printf("Number %d added to stack at position %d.\n", num, st->top);
	}
}

int pop(struct Stack *st) {
	int x = -1;
	if (st->top == -1) {
		printf("Stack downflow.\n");
	}
	else {
		x = st->arr[st->top];
		st->top--;		
	}
	return x;
}

int peek(struct Stack st, int position) {
	int x = -1;
	if (st.top-position+1 < 0) {
		printf("Invalid position.\n");
	}
	else {
		x = st.arr[st.top-position+1];
	}
	return x;
}


int main() {
	struct Stack st;
	int num;
	printf("Enter size for stack.\n");
	scanf("%d", &st.size);
	st.top = -1;
	st.arr = (int *)malloc(st.size * sizeof(int));
	printf("Enter element to be pushed in stcak.\n");
	for (int i=0; i<st.size+1; i++) {
		scanf("%d", &num);
		push(&st, num);
	}
	printf("pop operation...\n");
	pop(&st);
	pop(&st);
	printf("Peek operation at position 2.\n");
	peek(st, 2);
	return 0;
}