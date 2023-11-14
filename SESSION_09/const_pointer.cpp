#include <cstdio>

int main(void){
    int m = 10, n = 10;
    int* const p = &m;

    printf("BEFORE:*p = 100:m = %d\n", m);
    *p = 100;
    printf("AFTER:*p = 100:m = %d\n", m);

    //p = &m        //CTE : l-value is const object
                    //LHS expr is not modifiable l-value
    return 0;
}