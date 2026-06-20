#include <iostream>
#include <limits>

    int main(){

        int a, b;

        std::cout << "Hi ! Please give me 2 integers and i'll add them for you  :" << std::endl;
        
        std::cin >> a;
            if (!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

        std::cin >> b;
                if(!std::cin){
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
       
            if(a > std::numeric_limits<int>::max() - b) {

                std::cout << "oh wow ! ur numbers are a bit too big ... maybe try something else ?" << std::endl;
                    while (a > std::numeric_limits<int>::max() - b){
                        
                        std::cout << "okay lets try again now ! enter 2 integers :)!";
                        std::cin >> a;
                        std::cin >> b;
                    }
            } else {
                int Total = a+b;
                std::cout << "ur total is : " << Total << " !" << std::endl;
            }

        return 0; 
    }