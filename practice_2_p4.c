#include <stdio.h>

int main() {
    int count = 0, limit;
    printf("kotobar messege ta print korba: ");
    scanf("%d", &limit);
    while(count < limit) {
        printf("I love you\n");
        count++;
    }
    printf("The message was printed %d times.", count);
    return 0;
}
