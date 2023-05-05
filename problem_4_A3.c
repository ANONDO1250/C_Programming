// 1. Has Return + Parameter
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    int result = sum(x, y);
    printf("%d\n",result);
    return 0;
}

// // 2. Has Return + No Parameter

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_number() {
    srand(time(NULL));
    return rand() % 100 + 1;
}

int main() {
    int random_number = get_random_number();
    printf("%d\n", random_number);
    return 0;
}

// 3. No Return + Parameter
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

// 4. No Return + No Parameter
#include <stdio.h>

void greet() {
    printf("Hello, world!\n");
}

int main() {
    greet();
    return 0;
}
