#include <iostream>

using namespace std;

int main () {

double F, C;

cout << "What is the temperature in Fahrenheit?" << endl;
cin >> F;

 C = 5 *(F-32)/9;

cout << endl << "A temperature of " << F << " Degrees Fahrenheit is equal to " << C << " Degrees in Celsius." << endl;

if (C==100 || C>100){

    cout << endl << "Water boilds at this temperature (under typical conditions)." << endl;
}

    else {  
        cout << endl << "Water doesn't boil at this temperature (under typical conditions)." << endl;
    }

return 0;
}