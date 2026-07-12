#include <iostream>
#include <cstdlib>
#include <string>  // Je me suis embarquée dans un de ces truc moi aussi ... 
#include <cmath>

int i = 0;
std::string userInput; // will be in ASCII so i need to convert it to int or double
double variables[26];

double expression(); 
double morcel();
double factor(); 
double puissance();



    double expression(){
        double a = morcel();
            while (userInput[i] == '+' || userInput[i] == '-'){
                char op = userInput [i];
                i++;
                double b = morcel();
                
                switch (op){
                    case '+' : a = a+b;
                    break;
                    case '-' : a= a-b;
                    break;
                }
            }
    return a; }

//Function to calculate the result of a string of digits and operators. 
    double morcel() {
        double a = puissance();
      
            while (userInput[i]== '/' || userInput[i]== '*' || userInput[i]== '%'){
                char op = userInput[i]; // Op pour operateur.
                i++;
                double b = puissance();

                switch (op){

                    case '*' : a = a*b;
                    break;
                    case '/' : a = a/b;
                    break;
                    case '%' : a = fmod(a,b); 
                    break;
                }
            }  
    return a;}
 
double puissance(){
    double a = factor(); 

    if (userInput[i] == '^') {
        i++; 
        double b = puissance();
        a = pow(a,b); }
        return a;
    }
// Function to calculate the result of a string of digits and operators. 
    double factor () {
        while (userInput[i]== ' '){
            i++;
        }
        if (userInput[i]== '(') {
            i++; 
           double a = expression();
            
        if (userInput[i] == ')'){
            i++; }
        else {
            std:: cout << "mhh ... seems you forgot a ')' somwhere ? Wanna try again ? :D" << std:: endl; // ajouter la possibilité de refaire tout depuis ici. 
            std::getline (std:: cin, userInput); 
            i = 0;
            double a = expression();
        return a;
        }
        return a; 
        }
        if (userInput[i] >='a' && userInput[i] <= 'z'){
        double a =variables [userInput[i] - 'a'];
        i++; 
        return a;
        }

        double a = 0;
        while (userInput[i] >= '0' && userInput[i] <= '9') {
                a = a*10 + (userInput[i]-'0');
                i++;
        }

        if (userInput[i] == '!'){
            for (int j = (a-1); j >= 1; j--) {
                a = a*j;
        }
         i++;    
        return a; 
    
    }
    return a;
}


int main(){

    std::cout << "Hello ! I am a tiny calculator living in this terminal :) ! \nGive me a formula and I can help you resolve it :) (I cannot calculate square roots or anything using letters for now, please be patient:) !" << std::endl; 
    std::getline (std:: cin, userInput); 
    
    double Total = expression(); 

    std::cout << "Total : " << Total << std:: endl; 
    return 0;
}