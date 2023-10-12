#include <iostream>
#include <cstring>
#include "vector.hpp"

vector::vector():arr(0), N(0){
}

vector::vector(ssize_t _N):arr(0){
    if(_N<=0){
        arr = 0;
        N = 0;
    }
    else{
        N = _N;
        arr = (int*)calloc(N, sizeof(int));
        if(0 == arr){
            std::cout<<"fatal:out of memeory"<<std::endl;
            exit(EXIT_FAILURE);
        }
    }

}

vector :: vector(ssize_t _N, int val)
{
     if(_N<=0){
        arr = 0;
        N = 0;
    }
    else{
        N = _N;
        arr = (int*)malloc(N*sizeof(int));
        if(0 == arr){
            std::cout<<"fatal:out of memeory"<<std::endl;
            exit(EXIT_FAILURE);
        }
        for(index_t i = 0; i<N; ++i)
            arr[i] = val;
    }

}


vector::vector(const vector& other_vec){
    if(N)
    if(N>0){
         N = other_vec.N;
        arr = (int*)malloc(N * sizeof(int));
        if(arr == 0){
            std::cout<<"fatal::out of memory"<<std::endl;
            exit(EXIT_FAILURE);
        }
        memcpy(arr, other_vec.arr, N*sizeof(int));
    }
    else{
        arr = 0;
    }
}

void vector::show(const char* msg)const
{
    if(msg)
        std::cout<<msg<<std::endl;
    for(index_t index = 0; index<N; ++index)
        std::cout<<"<arr["<<index<<"] = "<<arr[index]<<std::endl;
}


vector :: ~vector()
{
    if(arr != 0){
        free(arr);
        arr = 0;
    }
}

vector::ssize_t vector::size() const{
    return (N);
}

vector::ssize_t vector::max_size()const{
    vector:: ssize_t m_size = 0;

    #ifndef BUILD_32
        m_size = (ssize_t)pow(2, 31);
    #elif BUILD_64
        m_size = (ssize_t)pow(2, 63);
    #endif
    
    return (m_size-1);
}

vector::status_t vector::push_back(int new_val){
    return (SUCCESS);
}

vector::status_t vector::pop_back(int* p_data){
    return (SUCCESS);
}