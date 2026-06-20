#include <iostream>
#include <limits>


      int Validate_Int(){
        int a;
        std:: cin >> a; 
         while (!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "It seems what you entered isn't a valid integer ... please try again" << std::endl;
            std::cin >> a;
         }
        return a;
      }

      bool Too_Big (int a, int b){
        if (b > 0 && a > std::numeric_limits<int>::max() - b) return true; 
        if (b < 0 && a < std::numeric_limits<int>::min() - b) return true;  
    
            return false;
       
     }


     void Calcul_Total (int a,int b){
        int Total = a+b; 
        std::cout << "ur total is : " << Total << " !" << std::endl;
     }

     int main(){
    

        std::cout << "Hi ! Please give me 2 integers and i'll add them for you  :" << std::endl;
        int a = Validate_Int();
        int b = Validate_Int();

            if (Too_Big (a,b)){   
                    for (int i = 0; i < 3; i++ ) {
                std::cout << "The numbers u entered are too big (or not numbers at all ...) :( Please enter 2 new integers :)!\nYou have " << (3 - i) << " tries left ! " << std::endl;
                a = Validate_Int();
                b = Validate_Int();

                if (!Too_Big (a,b)) {
                    Calcul_Total(a,b);
                    break;
                }

                    }
            } else {
               Calcul_Total(a,b);
                }
            

    return 0; 
            }

   
    