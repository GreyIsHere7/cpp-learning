#include <iostream>
#include <ctime>
    

using namespace std; 

int main(){

    srand(time(nullptr));
    const int MinValue = 1;
    const int MaxValue = 30;

    int RandNumber = (rand() % (MaxValue - MinValue + 1)) + MinValue;
    cout << "Guess ! The ! Number ! YAY (you have 3 guesses)! " << endl; 
    cout << "Enter a number between 1 and 30 ! ";

for (int i = 0; i < 3; i++) {
  
    int UserNbr;
    cin >> UserNbr;  

if (UserNbr == RandNumber){
    cout << "Wow ! u guessed it ! good job" << endl; 
    break;

}    else if (UserNbr > RandNumber){
    cout << "ouhhh lower !" << endl; 
}   else {
    cout << "mmhh ... higher !" << endl;
}

if (i == 2 && UserNbr != RandNumber) {
    std::cout << "Perdu !";
}
} 
    return 0;
}