#include <stdio.h>

int main() {
    int n, num, evenSum = 0, oddSum = 0;

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }
    printf("%d %d\n", evenSum, oddSum);
    return 0;
}
