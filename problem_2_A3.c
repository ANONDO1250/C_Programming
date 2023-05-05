#include <stdio.h>

int main() {
    int N, s,k;
    
    scanf("%d", &N);
    

    for (int i = 1; i <= N; i++) {
        
        s=N-i;
        
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
