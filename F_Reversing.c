#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Reverse the array in-place
    for (int i = 0, j = N - 1; i < j; i++, j--) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    // Print the reversed array
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
