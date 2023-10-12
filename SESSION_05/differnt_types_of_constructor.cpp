#include <stdio.h>

class X{
    //Synthesized constructor
};

class Y{
    public:
    //default constructor 
        Y(){
            puts("inside Y::Y()");
        }
};

class Z{
    public:
        //parameterized constructor
        Z(int _n, double _d)
        {
            printf("inside Z::Z():_n = %d, _d = %.3f\n", _n, _d);
        }
};

int main(void)
{
    X objX;
    Y objY;
    Z objZ(10, 3.14);
    printf("size of x = %llu", sizeof(X));
    printf("size of Y = %llu", sizeof(Y));
    printf("size of Z = %llu", sizeof(Z));
    return (0);
}
