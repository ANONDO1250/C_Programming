#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        if (i % 5 == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}