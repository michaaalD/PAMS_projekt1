#pragma once
#include <iostream>
#include <cstdlib>
#include "node.hh"
#include <memory>

/*
struct AllocationMetrics{
    uint32_t TotalAllocated = 0;
    uint32_t TotalFreed = 0;

    uint32_t CurrentUsage(){return TotalAllocated - TotalFreed;};
};
static AllocationMetrics s_AllocationMetrics;

static void PrintMemoryUsage()
{
    std::cout << "memory " << s_AllocationMetrics.CurrentUsage() << std::endl;
}

*/
/**
 * @brief szablon klasy kolejki
 * 
 * @tparam T parametr w zaleznosci od typu zmiennych w kolejce
 */
template<typename T>
class Queue
{
    private:
    
        struct Node
        {
            T data;         // wartosc w wezle
            Node *next;     // wskaznik na nastepny
        };
        
        struct Node *rear;
        struct Node *front;
        int n_elements;
    public:
        Queue(){rear = NULL;front = NULL; n_elements=0;};
        void enque(T element);
        void deque();
        void print_queue();
        void print_top();
        T get_top();
        void queue_size();
        int get_size() const {return n_elements;};
};



template <typename T>
void Queue<T>::enque(T element){
    struct Node *n = new Node;
    n->data = element;
    n->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = n;
    }
    rear->next = n;
    rear = n;
    n_elements++;
   
}

template <typename T>
void Queue<T>::deque(){
    //struct Node *n = front;
    if(front == NULL){
        std::cout << "Lista pusta - Nie mozna przyjac z kolejki! " << std::endl;
        return;
    };
    if(front == rear)
    {
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    n_elements--;
}

template<typename T>
void Queue<T>::print_queue(){
    struct Node *n;
    if(front == NULL){
        std::cout << "Lista pusta - Nie mozna wyswietlic! " << std::endl;
        return;
    }
    n = front;

    std::cout<< "Poczatek kolejki| "; 
    while (n != NULL)
    {
        std::cout << n->data << "<-";
        n = n->next;
    }
    std::cout<< " | Koniec kolejki" << std::endl;
}

template<typename T>
void Queue<T>::print_top(){
    struct Node *n = new Node; 
    if(front == NULL){
        std::cout << "Lista pusta - Nie mozna wyswietlic pierwszego elementu! " << std::endl;
        return;
    }
    n = front;
    std::cout<< "Pierwszy numer w kolejce  < " << n->data << " >" << std::endl;   
}

template<typename T>
T Queue<T>::get_top(){
    struct Node *n = new Node; 
    n = front;
    return n->data;
}

template <typename T>
void Queue<T>::queue_size(){
    std::cout << "Rozmiar kolejki: " << sizeof(T) * n_elements << "bajty" <<std::endl;
}

