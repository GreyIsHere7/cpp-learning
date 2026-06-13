#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {
    srand(time(nullptr));
    int Number1 = rand() % 6+1;
    cout << "You have rolled a dice ! Congrats ur result is : " << Number1 << endl;

    int Number2 = rand() % 6+1;
    cout << "You have rolled another dice ! Congrats ur result is : " << Number2 << endl;
    
    if (Number1 + Number2 == 12){
        cout << "Wow ! you got a 12 ! Thats some great luck :) ! " << endl;
    }

    return 0;
}