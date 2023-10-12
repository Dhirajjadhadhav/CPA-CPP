#ifndef _LIST_HPP
#define _LIST_HPP

const int SUCCESS = 1;
const int TRUE = 1;
const int FALSE = 0;
const int LIST_DATA_NOT_FOUND = 2;
const int LIST_EMPTY = 3;

typedef int data_t;

class node{
    friend class list;
    private:
        data_t data;
        node* prev;
        node* next;
       
    // Default constructor:Acts as a replacement for get_noe();
    node(int new_data = 0); 
};

class list
{
    private:
        node* head_node;
        static void generic_insert(node* beg, node* mid, node* end);
        void generic_delete(node* p_delete);
        node* search_node(data_t s_data);
        public:
        typedef enum status {
                                FALSE = 0,
                                SUCCESS= 1,
                                LIST_DATA_NOT_FOUND,
                                LIST_EMPTY,
                            }status_t;
        typedef int len_t;
    // Default cnstructor:replacement of create_list()
    list();

    //Destructor: replacement for destroy_list()
    ~list();

    status_t insert_start(data_t new_data);
    status_t insert_end(data_t new_data);
    status_t insert_after(data_t e_data, data_t new_data);
    status insert_before(data_t e_data, data_t new_data);

    status_t get_start(data_t* p_start)const;
    status_t get_end(data_t* p_end)const;
    status_t pop_start(data_t* p_start_data);
    status_t pop_end(data_t* p_end_data);

    status_t remove_start();
    status_t remove_end();
    status_t remove_data(data_t r_data);

    bool find(data_t f_data)const;
    bool empty()const;
    void show(const char* msg)const;
    len_t size()const;
};

#endif; /*_LIST_HPP */