
class Node
{
    private:
    friend class list;
   
        int data;
        Node* next;
        Node* prev;
        Node(int _data):data(data), prev(0), next(0){
        }
        Node(Node& other)
        {

        }

};

class list{
    private:
        Node* head;
        size_t nr_element;
        static void generic_insert(Node* p_beg, Node* p_mid, Node* p_end);
        static void generic_delet(Node* p_delete_node);

    public:
        list(){
            head  = new Node(0);
            head->next = head;
            head->prev = head;
        }
        list(const list& other)
        {
                this->head = new Node(*other.head);
                Node* p_run = 
                while(p_run!=this->)
        }
}
