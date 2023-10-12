double angle = 0.078;        /*Angle in radians*/
static double mul_init_val = 1.0;
static double sum_init_val = 0.0;

static double cpa_pow(double x, int n){

    int i;
    double result = mul_init_val;

    for(i = 0; i<n; ++i)
        result = result * x;
    
    return result;
}

static int cpa_fact(int n){
    if(n<=1)
        return 1;
    else
       return (n *cpa_fact(n-1)); 
}

double cpa_sin(double x){
    int i;
    int nr_term = 9;
    double result = 0.0;
    
    for(i = 1; i<nr_term; ++i)
        result += cpa_pow(-1, (i/2)) * (cpa_pow(x, i)/cpa_fact(i));
    return result;
}

double cpa_cos(double x){
    return  (1- cpa_pow(x, 2)/cpa_fact(2) + cpa_pow(x, 4)/cpa_fact(4) -
            cpa_pow(x, 6)/cpa_fact(6) + cpa_pow(x, 8)/cpa_fact(8) - cpa_pow(x, 10)/cpa_fact(10)
        );
}

// double cpa_cos(double x){
//     int i;
//     int nr_term = 9;
//     double result = 1.0;

//     for(int i = 1; i<nr_term; ++i)
//     {
//         if(i%2)
//         {
//             result -= cpa_pow(x, i*2)/cpa_fact((i*2));
//         }
//         else
//         {
//             result += cpa_pow(x, i*2)/cpa_fact(i*2);
//         }
//     }

//     return result;
// }
