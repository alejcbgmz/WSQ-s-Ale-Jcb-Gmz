// Alejandra E. Jacobo Gómez  WSQ09
#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;

int main(){

  long long int A, B;
  char answer, yes = '1', no = '2';
// in this case we are doing the basic program to determinate is the value is positive or negative. 
do {
  cout << "Give me a number, please." << endl;
  cin >> A;
  while (A < 0) {
    cout << "You wrote a negative number, try again!!." << endl;
    cin >> A;
  }
// we make B equal to A , for evaluate the value. 
  B = A; 

  while (B > 1){
    B = B - 1;  
    A = A * B;  
  }  
  if (A==0){
    A=1;
  }
// now its time to print the answer of the factorial we chose. 
  cout << "The factorial of you number is..." << endl << A << endl;
// I decided to put this conditional to try another values for the factorial.
  cout << "Do you want to try with another number? ( yes press 1/ no press 2 )" << endl;
  cin >> answer;
// the program will repet when the user write 1. 
} while (answer == yes);
//but if the user chose "2 ", the program will close.
  if ( answer == no ) {
    cout << "Thank you.The program it's over!" << endl;
  }

  return 0;
}
