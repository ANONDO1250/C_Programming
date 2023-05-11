#include <stdio.h>

int main()
{
    char str[1000];
    int small = 0, capital = 0, spaces = 0, i = 0;
    fgets(str, 1000, stdin);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            small++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            capital++;
        else if (str[i] == ' ')
            spaces++;
        i++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, spaces);
    return 0;
}
