#include <stdio.h>

int main() {
    int n, even_count = 0, odd_count = 0;

    
    scanf("%d", &n);

    int arr[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("%d %d\n", even_count,odd_count);
    

    return 0;
}
