#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    
    int i, capital = 0, small = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            capital++;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            small++;
        }
    }
    
    printf("%d %d", capital, small);
    
    return 0;
}
