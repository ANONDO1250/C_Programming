#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int lowestNumber = INT_MAX; // Initialize lowestNumber with a large value
    int lowestPosition = -1;    // Initialize lowestPosition with an invalid value

    for (int i = 0; i < N; i++) {
        if (A[i] < lowestNumber) {
            lowestNumber = A[i];
            lowestPosition = i + 1; // Add 1 to convert to 1-indexed position
        }
    }

    printf("%d %d\n", lowestNumber, lowestPosition);

    return 0;
}
