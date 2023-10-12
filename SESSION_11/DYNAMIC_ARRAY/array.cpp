#include <iostream>
#include "array.hpp"

array::array(size_t _N) : a(new int[_N]) N(_N){

};

array ::status_t array :: get(ssize_t index, int* element)const{
    if(index<0 || index>=N)
        return INDEX_OUT_OF__RANGE;
    *element = a[index];
    return SUCCESS;
}

array :: status_t array::set(ssize_t index, int new_val){
    if(index<0 || index>=N)
        return (INDEX_OUT_OF__RANGE);

    a[index] = new_val;
    return (SUCCESS);
}

void array::show(const char* msg)const{
    if(msg)
        std::cout<<msg<<std::endl;
        
    for(size_t i = 0; i<N; ++i)
        std::cout<<"a["<<i<"]:"<<a[i]<<std::endl;
}

ssize_t array::size()const{
    return (N);
}
array :: ~array(){
    delete []a;
}