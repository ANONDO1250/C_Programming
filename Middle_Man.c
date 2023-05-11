#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int ages[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }
    qsort(ages, n, sizeof(int), compare);
    if (n % 2 == 1) {
        printf("%d\n", ages[n/2]);
    } else {
        printf("%d %d\n", ages[n/2-1], ages[n/2]);
    }
    return 0;
}
