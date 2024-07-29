#include<stdio.h>
#include "foo.h"
int main(){
    printf("Hello World!\n");
    printf("%d\n", CONST);
    printf("Value of function fun is %d\n", fun(5, 10));
    return 0;
}