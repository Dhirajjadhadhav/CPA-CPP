#include <stdio.h> 
#include <stdlib.h>

//extern static double mul_init_val;  // CTO
extern double angle;

extern double cpa_sin(double x);
extern double cpa_cos(double x);

int main(void){
    double result;

    result  = cpa_sin(angle);
    printf("result = %.3f\n", result);
    result = cpa_cos(angle);
    printf("result = %.3f\n", result);

    return 0;
}

/*

[extern/static] [const] type variavale_name

int float num           //CTO      

*/