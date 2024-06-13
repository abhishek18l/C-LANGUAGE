#include <stdio.h>
#include"mymodule.h"
void f(){
    if(!isLoggedIn){
        printf("NOT LOGGED IN !!");
        return;
    }
    printf("I AM TASK , I WILL serve");
}