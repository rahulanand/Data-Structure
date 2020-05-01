#include <stdio.h>

int main() {
    int h[21] = { 0 };
    int a[10] = {1, 4, 5, 5, 12, 13, 15, 15, 20, 20};  // sorted array

    for (int i=0; i<10; i++) {
        h[a[i]]++;
        printf("printing h: %d\n", h[a[i]]);
    }
    for (int j=1; j<=20; j++) {
        if (h[j] > 1) {
            printf("Duplicate Item: %d, Count: %d\n", j, h[j]);
        }
    }
}