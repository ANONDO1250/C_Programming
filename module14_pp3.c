#include <stdio.h>



int char_to_ascii(char c){
    return(int) c;
}
int main(){
    char c;
    int ascii;
    scanf("%c",&c);
    ascii=char_to_ascii(c);
    printf("%d",ascii);


    return 0;
}