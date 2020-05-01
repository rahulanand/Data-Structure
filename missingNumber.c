#include <stdio.h>
#include <stdlib.h>


int main() {
    int *a, *h, n, max, num;  // h-> hashMap 
    printf("Enter number of integers in sequences with missing numbers.\n");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i<n; i++) {
        scanf("%d", &num);
        a[i] = num;
    }
    printf("Enter highest number enterd.\n");
    scanf("%d", &max);
    h = (int *)malloc(max * sizeof(int));
    // initialize hash map with zeroes
    for (int i=0; i<max; i++) {
        h[i] = 0;
    }
    // put values in hash map
    for (int j=0; j<n; j++) {
        h[a[j]] = 1;
    }
    // search missing number
    for (int k = 1; k<max; k++) {
        if (h[k] == 0) {
            printf("%d is missing.\n", k);
        }
    }
}