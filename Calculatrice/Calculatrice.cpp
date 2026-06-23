#include <iostream>
#include <cstdlib>
#include <string>  // Je me suis embarquée dans un de ces truc moi aussi ... 
#include <cmath>

std::string userInput; // will be in ASCII so i need to convert it to int or d
double expression(); 
double morcel();
double factor(); 

int i =0;

    double calculer(){
        double Total;
        return Total; 
    }

    double expression(){
        return 0;
    }

//Function to calculate the result of a string of digits and operators, ignores spaces too.  
    double morcel() {
        double a = factor(); 
        double c;
            while (userInput[i]== '/' || userInput[i]== '*' || userInput[i]== '%'){
                char op = userInput[i]; 
                i++;
                double b = factor();

                if (op == '*'){
                    c = a*b;
                }
                if (op == '/'){
                   c = a/b;
                }

                if (op == '%') {
                    c = fmod(a,b);
                }
            }
    return c;
            }

//Function to convert a string of digits into a double value, ignores spaces too. 
    double factor () {
        while (userInput[i]== ' '){
            i++;
        }
        double b = 0;
        while (userInput[i] >= '0' && userInput[i] <= '9') {
                b = b*10 + (userInput[i]-'0');
                i++;
             }
       return b;
    }


int main(){

    std::cout << "Hello ! I am a tiny calculator living in this terminal :) ! \nGive me a formula and I can help you resolve it :) !" << std::endl; 
    userInput = "      45"; // testing will be changed to correct value later :)
    std::cout << userInput;
    return 0;
}