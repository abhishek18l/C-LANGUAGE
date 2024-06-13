#include <stdio.h>
#include <ctype.h>
char* toggleCase(char* text){
    for(int i = 0 ; text[i] != '\0'; i++){
        if(islower(text[i])){
            text[i] = toupper(text[i]);
        }else{
            text[i] = tolower(text[i]);
        }
    }
}

int main(){
    char text[1024];
    scanf("%s",&text);
    printf("%s",toggleCase(text));
    return 0;
}