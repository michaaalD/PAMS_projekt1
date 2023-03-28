#include <iostream>
#include <cstdlib>

template <typename T>

class stack_List{
    private:
        struct Node{
            T data;
            Node* next;
        };

        struct Node* top;
    public:
        stack_List(){top=NULL;};
        void push(T element);
        T pop();
        void print_elements();
        void top_element();

};

template <typename T>
void stack_List<T>::push(T element){
    struct Node* n = new Node;
    n->next = top;
    n->data = element;
    top = n;
}

template <typename T>
T stack_List<T>::pop(){
    struct Node* n = new Node;
    if(top == NULL){
        exit(1);
    }
    n = top;
    top = top->next;
    return n->data;
    free(n);
    
}

template <typename T>
void stack_List<T>::print_elements(){
    struct Node* curr = new Node;
    curr = top;
    while(curr!=NULL){
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }
    free(curr);
}


template <typename T>
void stack_List<T>::top_element(){
    struct Node* curr = new Node;
    curr = top;
    std::cout << top->data << std::endl;
    free(curr);
}

