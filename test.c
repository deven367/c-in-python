#include<stdio.h>
#include "foo.h"
int main(){
    printf("Hello World!\n");
    printf("%d\n", CONST);
    printf("Value of function fun is %d\n", fun(5, 10));


    Fun f = { 5, 5};
    // f.a = 5;
    // f.b = 5;
    print_fun(f);
    return 0;
}