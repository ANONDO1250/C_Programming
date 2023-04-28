#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);
    
    int counts[26] = {0}; 
    
    
    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i]-'a']++;
    }
    
   
    for (int i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a'+i, counts[i]);
    }
    
    return 0;
}
