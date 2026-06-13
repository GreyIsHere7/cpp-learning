#include <iostream>
#include <cmath>

using namespace std; 

int main(){

    double Radius; 
    cout << "Pour calculer le area de votre cercle, veuillez indiquer le radius de votre cercle ";
    cin >> Radius;

    const double Pi = 3.14;
    double Area = Pi* pow(Radius, 2.0); 
    cout << "your area is :" << Area; 

return 0; 


}