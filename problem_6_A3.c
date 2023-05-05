// Pass by value means that a copy of the argument is passed to the function.
// This copy is local to the function and any changes made to it do not affect the original argument in the calling function.
// Pass by value is the default method of passing arguments in C.

// Here's an example of pass by value:

#include <stdio.h>

void change(int x) {
    x = 10;
}

int main() {
    int num = 5;
    change(num);
    printf("%d\n", num);
    return 0;
}

// Pass by reference, on the other hand, means that a reference to the original 
// argument is passed to the function. This allows the function to modify the original 
// argument in the calling function. In C, pass by reference is implemented using pointers.

// Here's an example of pass by reference:

#include <stdio.h>

void change(int *x) {
    *x = 10;
}

int main() {
    int num = 5;
    change(&num);
    printf("%d\n", num); // Output: 10
    return 0;
}
