#include <stdio.h>

int main() {
    int Num;
    scanf("%d", &Num);
    
    if (Num <= 0) {
        for (int i = Num; i <= 1; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = 1; i <= Num; i++) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
