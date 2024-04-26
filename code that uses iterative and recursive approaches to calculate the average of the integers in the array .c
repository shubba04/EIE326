`#include <stdio.h>

float averageIterative(int A[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += A[i];
    }
    return (float)sum / size;
}

float averageRecursive(int A[], int size, int index) {
    if (index == size - 1)
        return (float)A[index] / size;
    else
        return ((float)A[index] + averageRecursive(A, size, index + 1) * (size - index - 1)) / size;
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(A) / sizeof(A[0]);

    // Using iteration
    float avgIterative = averageIterative(A, size);
    printf("Average using iteration: %.2f\n", avgIterative);

    // Using recursion
    float avgRecursive = averageRecursive(A, size, 0);
    printf("Average using recursion: %.2f\n", avgRecursive);

    return 0;
}