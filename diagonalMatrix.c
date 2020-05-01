#include <stdio.h>

/*
    Diagonal Matrix Algo to store the Data
    [1 0 0 0 0 0]
    [0 3 0 0 0 0]
    [0 0 5 0 0 0]
    [0 0 0 7 0 0]
    [0 0 0 0 9 0]
    [0 0 0 0 0 8]
*/

void setData(int A[], int i, int j, int data) {
    // i,j  row and cloumn respectively.
    if (i == j)
        A[i-1] = data;
    else
        printf("Invalid row/coloumn.\n");
}

int getData(int A[], int i, int j) {
    if (i == j)
        return A[i-1];
    else
        return 0;
}

void displayMatrix(int A[], int n) {
    int i, j;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j)
                printf("%d ", A[i-1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main() {
    int i, data;
    printf("enter row/coloumn lengths.\n");
    scanf("%d", &i);
    int A[i];
    for (int x=0; x<i; x++) {
        printf("enter data..\n");
        scanf("%d", &data);
        setData(A, x, x, data);
    }
    displayMatrix(A, i);
    printf("getting data for 2,2\n");
    printf("%d", getData(A, 2, 2));
    printf("\n");
    printf("%d", getData(A, 2, 3));
    return 0;
}