#ifndef _VECTOR_H
#define _VECTOR_H

class vector{
    
    public:
        typedef long long int ssize_t;
        typedef long long int index_t;
        typedef enum status{
                                SUCCESS = 1, 
                                INDEX_OUT_OF_BOUND,
                                INVALID_SIZE, 
                                VECTOR_EMPTY
                            }status_t;

        //default constructor
        vector(); 
        //vector with pre-allocation          
        vector(ssize_t _N) ;
        //preallocation and initial value  
        vector(ssize_t _N, int val);  
        //vector initialized by another vector
        vector(const vector& other_vec);
        
        ~vector();


        //mermber function
        ssize_t size()const;
        ssize_t max_size()const;
        status_t push_back(int new_val);
        status_t pop_back(int* p_data);

        status_t get(index_t index, int* p_val);
        status_t set(index_t index, int new_val);
        void show(const char* msg)const;
        void sort()const;

        index_t search(int search_element)const;
        index_t search(int search_elemnt, 
                        index_t start,
                        index_t end_index)const;

    private:
        int* arr;
        ssize_t N;


};

#endif /*_VECTOR_H */