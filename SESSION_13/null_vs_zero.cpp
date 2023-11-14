/*
    void test(void){
        int* p = (int*)malloc(sizeof(int));
        use p;

        free(p);
        p = NULL;
        p = 0;
    }
*/

#include <iostream>
#include <stdlib.h>

int main(void){
    int* p  =  (int*)malloc(sizeof(int));

    int* p = NULL;
    return  (0);
}