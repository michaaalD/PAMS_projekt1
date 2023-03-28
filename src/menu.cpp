#include "menu.hh"


void run_menu(){
    Queue<int> Q;
    int number = 0;
    int choice=0;

    

     do{
        std::cout << "----------------------------------" << std::endl;
        std::cout << "|         Menu kolejki            |" << std::endl;
        std::cout << "----------------------------------" << std::endl;
        std::cout << "|             Opcje:              |" << std::endl;
        std::cout << "| 1. Pobierz numer                |" << std::endl;
        std::cout << "| 2. Wyswietl aktualny numer      |" << std::endl;
        std::cout << "| 3. Wyswietl kolejke             |" << std::endl;
        std::cout << "| 4. Pokaz rozmiar struktury      |" << std::endl;
        std::cout << "| 5. Przyjecie osoby z kolejki    |" << std::endl;
        std::cout << "| 6. Koniec                       |" << std::endl;       
        std::cout << "-----------------------------------" << std::endl;
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        switch(choice)
        {
            case 1:
            {
                if(number != 99){
                    number++;
                    Q.enque(number);
                    std::cout << "Twoj numer to < " << number << " >" << std::endl;
                }
                else{
                    number = 1;
                    Q.enque(number);
                }
                break;
            }
            case 2:
            {
                Q.print_top();
                break;
            }
            case 3:
            {
                Q.print_queue();
                break;
            }
            case 4:
            {
                Q.queue_size();
                break;
            }
            case 5:
            {
                Q.deque();
                break;
            }
            default:
            {
                if(choice !=6)
                    std::cout << "Niepoprawna opcja" << std::endl;
                break;
            }
        }
        //std::cout << number << std::endl;
     }while(choice != 6);
}