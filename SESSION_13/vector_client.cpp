#include "vector.hpp"

int main(void){
    vector v1;      //vector::vector(&v1)
    vector v2(5);   //vector::vector(&v2, 5)
    vector v3(10, 48);  //vcetor::vector(&v3, 10, 48)
    vector v4(v3);    //vector::vector(&v4, v3)

    v1.show("v1:");
    v2.show("V2:");
    v3.show("v3:");
    v4.show("v4:");
}