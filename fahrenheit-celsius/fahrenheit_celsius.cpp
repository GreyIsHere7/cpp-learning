#include <iostream>

using namespace std;

int main() {

    cout << "Hi ! Welcome here :), My job is to help you convert Farenheit into Celcius ! Please enter what temperature you want to convert :" ;

    double Farenheit = 0;
    cin >> Farenheit; 

    double celsius = (Farenheit - 32)* (5.0/9.0);

    if (celsius > 30) {
        cout << " Wow, it's kinda hot in here, it is " << celsius << "°C Right now :o" << endl; 
     } else {
    cout << " Thanks ! In Celsius it is " << celsius << "°C !" << endl;
   
}
    return 0;

}
   