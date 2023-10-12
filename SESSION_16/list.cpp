#include <iostream>
#include "list.hpp"

// Constructor of class node
node::node(int new_data):data(new_data),
                         prev(0),
                         next(0)
{

}

// Constructor of class list
list::list():head_node(new node)
{
    head_node->next = head_node;
    head_node->next = head_node;
}

// Destructor of class list

list::~list()
{
    node* run = 0;
    node* run_next = 0;

    for(run = head_node->next; run!=head_node; run = run->next)
    {
        run_next = run->next;
        delete run;
    }
    delete head_node;
    head_node = 0;
}

list::status_t list::insert_start(data_t new_data)   
{
    generic_insert(head_node, new node(new_data), head_node->next);
    return SUCCESS;
}

list::status_t list::insert_end(data_t new_data)
{
    generic_insert(head_node->prev, new node(new_data), head_node);
    return SUCCESS;
}

list::status_t  list::insert_after(data_t e_data, data_t new_data)
{
    node* e_node = 0;

    e_node = search_node(e_data);
    if(0 == e_node)
        return LIST_DATA_NOT_FOUND;
    generic_insert(e_node, new node(new_data), e_node->next);
    return SUCCESS;
}

list::status_t list::insert_before(data_t e_data, data_t new_data)
{
    node* e_node = 0;

    e_node = search_node(e_data);
    if(0 == e_node)
        return LIST_DATA_NOT_FOUND;
    generic_insert(e_node->prev, new node(new_data), e_node);
    return SUCCESS;
}

list::status_t list::get_start(data_t* p_start_data)const
{
    if(this->empty())
        return  LIST_EMPTY;
    *p_start_data = this->head_node->next->data;
    return SUCCESS;
}

list ::status_t  list::get_end(data_t* p_end_data)const
{
    if(this->empty())
        return LIST_EMPTY;
    *p_end_data = this->head_node->prev->data;
    return SUCCESS;

}

