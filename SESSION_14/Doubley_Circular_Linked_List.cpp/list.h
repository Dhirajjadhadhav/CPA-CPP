#ifndef _LIST_HPP
#define _LIST_HPP

#include <stdio.h>

#define SUCCESS             1
#define LIST_DATA_NOT_FOUND 2
#define LIST_EMPYT          3

typedef struct node node_t;
typedef node_t list_t;
typedef int status_t;
typedef int data_t;
typedef int len_t;

struct  node
{
    data_t data;
    struct node* prev;
    struct node* next;
};

list_t* create_list();

status_t insert_start(list_t* p_list, data_t new_data);
status_t insert_end(list_t* p_list, data_t new_data);
status_t insert_before(list_t* p_list, data_t e_data, data_t new_data);
status_t insert_after(list_t*p_list, data_t e_data, data_t new_data);

status_t get_start(list_t* p_list, data_t* p_start);
status_t get_end(list_t* p_list , data_t* p_end);
status_t pop_start(list_t* p_list, data_t* p_start);
status_t pop_end(list_t* p_list, data_t* p_end);

status_t remove_start(list_t* p_list);
status_t remove_end(list_t* p_list);
status_t remove_data(list_t* p_list , data_t e_data);

status_t serach_list(list_t* p_list, data_t search_data);
len_t get_list_length(list_t* p_list);

status_t is_list_empty(list_t* p_list);
void show_list(list_t* p_list, const char* msg);

status_t destroy_list(list_t** p_list);

static void generic_insert(node_t* p_beg, node_t* pmid,  node_t* p_end);
static void generic_delete(node_t* p_delete);
static node_t* search_node(list_t* p_list, data_t s_data);
static node_t* get_node(data_t new_data);

static void* xmalloc(size_t nr_element, size_t size_per_emelent);

#endif /*_LIST_HPP*/