#include <stdio.h>
#include <stdlib.h>

const int g_num = 100;

int main(void){
    const int l_num = 200;
    int *p1 = NULL;
    int *p2 = NULL;

    //g_num = 1000; //CTE : LHS expression must be a modifiable lvalue 
    //l_num = 2000; // CTE: LHS expression (on LHS)must be a modifiable lvalue
    
    p1 = &g_num;
    p2 = &l_num;

    printf("BEFORE : *p2 = 2000: *p2 = %d\n", *p2);
    *p2 = 2000;
    printf("AFTER: *p2 = 2000 , *p2 = %d\n", *p2);

    printf("BEFORE: *p1 = 1000 : *p1 = %d\n", *p1);
    *p1 = 1000;  //  MEMORY VIOLATION EXCEPTION
    printf("AFTER : *p1 = 1000 : *p1 =%d\n", *p1);

    return (0);
}

/*
    l-value mention const object.
    int g_num; ->data definition statement

    int -> type annotation 
    g_num -> identifier

    const int g_num = 100;

    100-> initializer

*/