#include <stdio.h>

int main() {
    int h[17] = { 0 }, k = 10, diff;
    int a[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};  // find pair with sum a+b = 10

    for (int i=0; i<10; i++) {
        h[a[i]]++;
    }

    for (int i = 0; i<10; i++) {
        if (a[i] < 10 ) {
            diff = 10 - a[i];
            if (h[diff] != 0 && diff != a[i]) {
                printf("Pair Found: %d, %d\n", a[i], diff);
            }
        }
    }

}