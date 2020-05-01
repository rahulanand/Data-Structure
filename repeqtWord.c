#include <stdio.h>


int main() {
    char *a = "Tweerter";
    int h[25] = { 0 };

    for (int i=0; a[i]!='\0'; i++) {
        h[a[i]-97]++;
    }
    for (int i=0; i<25; i++) {
        if (h[i] > 1) {
            printf("Word %c repeated %d times.\n", (i+97),h[i]);
        }
    }

}