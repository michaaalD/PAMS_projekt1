#include "bank.hh"

void run_bank()
{

    /*
    Queue<std::string> Q;
    
    std::string value;

    while (in >> value)
    {
        Q.enque(value);
    }
    Q.print_queue();
    */
    Queue<int> Q;
    for(int i=0; i < 50000; i++){
        Q.enque(i);
    }
    //Q.print_queue();
    Q.queue_size();
    for(int i=0; i < 20000; i++){
        Q.deque();
    }
    
    //Q.print_queue();
    Q.queue_size();
 
}