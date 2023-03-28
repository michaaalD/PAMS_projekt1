#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif


#include "queue.hh"
#include "menu.hh"
#include "bank.hh"
#include <stdlib.h>
#include <unistd.h>
#include <memory>



int main()

{
    /*
    List<std::string> Paul;
    Paul.insert("Michal");
    Paul.insert("Jan");
    Paul.insert("Jan");
    Paul.insert("Dos");
    Paul.print_elements();

    List<int> P;
    P.insert(7);
    P.insert(4);
    P.insert(6);
    P.insert(10);
    P.print_elements();
*/

    //Queue<std::string> Q;
/*
    Q.enque("Kacper");
    Q.enque("Zosia");
    Q.enque("Asia");
    Q.deque();
    Q.print_queue();
  */  
    //run_menu();
/*
    Queue<int> Q;
    for(int i=0; i <100000; i++){
        Q.enque(i);
    }
    Q.print_queue();

    */
  /*
   for(int i=0; i<10; i++){
    std::cout << i << std::endl;
    sleep(1);
   }
*/

/*
    Queue<std::string> Q;
    std::ifstream inFile;
    std::string value;
    //unsigned int n;
    
    inFile.open("../data.txt");
    if (!inFile)
    {
        std::cout << "\nError opening file.\n";
        return 13;
    }

    
    while (inFile >> value)
    {
        Q.enque(value);
    }
    Q.print_queue();

    inFile.close();

    sleep(3);

    inFile.open("../data1.txt");
    if (!inFile)
    {
        std::cout << "\nError opening file.\n";
        return 13;
    }

    while (inFile >> value)
    {
        Q.enque(value);
    }
    Q.print_queue();

    inFile.close();   

    */

   /*
   std::ifstream inFile;

    inFile.open("../data.txt");
    if (!inFile)
    {
        std::cout<< "\nError opening file.\n";
        return 13;
    }
*/
   run_bank();
   //run_menu(); 
   

   
    
    return 0;
}
