#include <iostream>
#include <cstdlib>
#include <string>  // Je me suis embarquée dans un de ces truc moi aussi ... 



std::string userInput; // will be in ASCII
int i =0;
   

    double factor () {
       char a = userInput[i];
       double b = a-'0';
       i++;
       return b;

    }


int main(){

    std::cout << "Hello ! I am a tiny calculator living in this terminal :) ! \nGive me a formula and I can help you resolve it :) !" << std::endl;
    
    std::cout << factor() << std::endl;
    return 0;
}