#ifndef _ARRAY_H
#define _ARRYA_H

typedef long long int ssize_t;

class array{
    private:
        int *a;
        size_t N;

        size_t partition(ssize_t p, ssize_t r);
        void quick_sort(ssize_t p, size_t r);
    
    public:
        typedef enum status_t {SUCCESS = 1, INDEX_OUT_OF__RANGE}status_t;
        array(size_t N); 
        status_t get(size_t index, int* element)const;
        status_t set(size_t index, int new_val);
        size_t size()const;
        void sort();
        void show(const char* msg)const;
        ~array();
};

#endif /*_ARRAY_H*/