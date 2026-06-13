#include <iostream>



 void AfficherMenu (std::string nom){

    std:: cout << "Bonjour " << nom << std::endl;
    std:: cout << "1. Jouer !" << std:: endl; 
    std:: cout << "2. Quitter." << std:: endl;

}
    std::string IntroUser (){
        std:: cout<< "Bonjour, avant de pouvoir commencer ton aventure, comment dois-je t'adresser ?" << std:: endl;
    
        std:: string UserName;
        std:: cin >> UserName; 


        return UserName;
    }

int main(){

    AfficherMenu(IntroUser());
    
    return 0;
}

