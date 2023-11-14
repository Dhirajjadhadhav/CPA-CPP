#include <cassert>

class T{

};

typedef unsigned long long int ssize_t;

void test(void){
    /*Let T be any defined type in program. May be user defined | may be built in */
    /*Let N be a positive integer */
    ssize_t N = 10;
    assert(N>10)

    /*To allocate array of size N of element of type T*/
    T* p_arr = new T[N];

    /*To free such array */
    delete p_arr;
    p_arr = 0;
}