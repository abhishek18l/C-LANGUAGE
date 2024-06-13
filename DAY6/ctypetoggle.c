#include <stdio.h>
#include <ctype.h>
char* toggleCase(char* text){
    for(int i = 0 ; text[i] != '\0'; i++){
        if('a'<=(text[i]) && 'z'<= (text[i]))
        {
            text[i] = text[i] - 32;
        }
        else if('A'<= (text[i]) && 'Z' <= (text[i]))
        {
            text[i] = text[i] + 32;
        }
    }
    return text;
}

int main(){
    char text[1024];
    printf("Enter the Name : \n");
    scanf("%s",text);
    printf("%s",toggleCase(text));
    return 0;
}