#define CONST 10

int fun(int a, int b){
    return a + b;
}

typedef struct  {
    int a;
    int b;
} Fun;

void print_fun(Fun x){
    printf("Values in the struct are %d and %d\n", x.a, x.b);
}