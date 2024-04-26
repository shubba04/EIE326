#include <stdio.h>

int main() {
    int n = 10;
    int *i; // Pointer declaration

    // Assign the address of n to the pointer
    i = &n;

    // Using the pointer in a for loop with step value at n
    for (; *i > 0; *i -= n) {
        printf("%d\n", *i);
    }

    return 0;
}