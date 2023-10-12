#include <cstdio>

int main(void){
    int n = 100;
    const int* p;

    p = &n;
    printf("*p = %d\n", *p);

    *p = 500;   //CTE: LHS expression should be modification  
}