#include <stdio.h>

int main() {
    int a[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};  // find pair with sum a+b = 10
    int min = a[0], max=a[0];

    for (int i=1; i<10; i++){
        if (a[i] < min) {
            min = a[i];
        }
        else if (a[i] > max) {
            max = a[i];
        }
    }
    printf("Min: %d, Max: %d", min,max);
    

}