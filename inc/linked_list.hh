#include <iostream>
#include <cstdlib>
#include "node.hh"


template <typename T>
class List{
private:

    struct Node
    {
        T data;         // wartosc w wezle
        Node *next;     // wskaznik na nastepny
    };

    /*wskazniki do listy*/
    struct Node *head;  // wskaznik glowy list
    struct Node *curr;  // aktualny eement
    struct Node *temp;  // tyczasowy wskaznik
    

public:
    List()
    {
        head = NULL;
        curr = NULL;
        temp = NULL;
        
    };
    void insert(T element);
    void print_elements();
    void delete_node(T element);
};

template <typename T>
void List<T>::insert(T element)
{
    struct Node *n = new Node;
    n->next = NULL;
    n->data = element;

    if (head != NULL)
    {
        curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
}

template <typename T>
void List<T>::print_elements()
{
    curr = head;
    std::cout<< "bottom" << std::endl;
    while (curr != NULL)
    {
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }
    std::cout<< "top" << std::endl;

}

