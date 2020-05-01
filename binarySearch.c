#include <stdio.h>
#include <stdlib.h>

int binarySearch(int l, int h, int *a, int data) {
    int mid = 0;
    printf("l: %d, h: %d\n", l,h);
    if (l <= h) {
        mid = (l + h)/2;
        if (a[mid] == data) {
            return 1;
        }
        else if (data < a[mid]) {
            return binarySearch(l, mid-1, a, data);
        }
        else 
        {
            return binarySearch(mid+1, h, a, data);
        }
    }
    return 0;
}

int main() {
    int *a, n, num;
    printf("Enter number of inreger.\n");
    scanf("%d", &n);
    a = (int *)malloc(n* sizeof(int));
    for (int i=0; i<n; i++) {
        scanf("%d", &num);
        a[i] = num;
    }
    printf("Perform Binary search...\n");
    int x;
    printf("Enter integer to search:\n");
    scanf("%d", &x);
    int rc = binarySearch(0, n, a, x);
    printf("%d\n", rc);
    if (rc == 0) {
        printf("%d not found.\n", x);
    }
    else {
        printf("%d found.\n", x);
    }
    
}