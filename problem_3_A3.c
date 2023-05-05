#include <stdio.h>

int count_before_zero(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == 0) {
            break;
        }
    }
    return i;
}

int main() {
    int arr[100], size, i;
    scanf("%d", &size);

    
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", count_before_zero(arr, size));

    return 0;
}
