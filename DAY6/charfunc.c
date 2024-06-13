
#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[1024];
    scanf("%s",text);
    int countDigit=0,countAlpha=0,countAlnum = 0 , countLower = 0 , countUpper = 0;
    for (int I = 0 ; text[I] != '\0' ; I++){
        if(isdigit(text[I])){
            countDigit ++;
        }
        if(isalpha(text[I])){
            countAlpha ++;
        }
        if(isalnum(text[I])){
            countAlnum ++;
        }
        if(islower(text[I])){
            countLower ++;
        }
        if(isupper(text[I])){
            countUpper ++;
        }
    }
    printf("Number of digits :%d",countDigit);
    printf("\nNumber of Alphanumeric :%d",countAlpha);
    printf("\nNumber of Alnum: %d",countAlnum);
    printf("\nNumber of lowercase:%d",countLower);
    printf("\nNumber of uppercase:%d",countUpper);
    return 0;
}

