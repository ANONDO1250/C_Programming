#include <stdio.h>

int main() {
    int num1, num2;
    float result;
    
   
    scanf("%d %d", &num1, &num2);
    
    
    
    // Addition
    result = num1 + num2;
    printf("%d + %d = %.2f\n", num1, num2, result);
    
    // Subtraction
    result = num1 - num2;
    printf("%d - %d = %.2f\n", num1, num2, result);
    
    // Multiplication
    result = num1 * num2;
    printf("%d * %d = %.2f\n", num1, num2, result);
    
    // Division
    result = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, result);
    
    return 0;
}
