#include <cstdio>

int main(void){
    int m = 10, n = 10;

    const int* const p = &m;

    //p = &n        //CTE : expression must be modifiable lvalue
    //*p = 10       //CTE : expression must be modifiable lvalue
    return 0;
}

/*
    non-const pointer to non-const type
    T* p;

    const pointer to non-const type
    T* const p =&ibjT;

    const pointer to cost type
    cost T* const P = &objT;

*/