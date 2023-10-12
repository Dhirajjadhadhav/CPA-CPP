#include <iostream>
#include <cassert>
#include "array.hpp"

int main(void){
    array* pa = 0;
    array::status_t status;
    size_t N;

    N = 8;
    pa = new array(8);

    for(size_t  i = 0; i<pa->N; ++i)
    {}    
    
}