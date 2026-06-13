#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std; 

int main() {

    srand (time (0));
    const short MinValue = 1;
    const short MaxValue = 7;

    short First = (rand() % (MaxValue - MinValue + 1)) + MinValue;
    short Second = (rand() % (MaxValue - MinValue + 1)) + MinValue;
    short Third = (rand() % (MaxValue - MinValue + 1)) + MinValue;

    cout << "Pour gagner tu dois avoir 3x le même chiffres :) Roulement de Tambour ! " << endl << First << endl; 
    cout << Second << endl; 
    cout << Third << endl; 

    if (First == Second && Second == Third){
        cout << "WOW ! C'EST UN JACKPOT !";

    } else if (First == Second || Second == Third || First == Third) {
        cout << "Presque !";

     } else {
        cout << " Try again ... !";

     }
    return 0;
}