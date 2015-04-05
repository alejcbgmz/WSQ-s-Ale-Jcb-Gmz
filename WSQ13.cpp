// Alejandra Estephania Jacobo Gómez WSQ13
#include <iostream>
using namespace std;

double square(double x){
  double r = x, t = 0;
  while (t != r){
    t = r; 
    r = (x/r + r)/2;
  }
  return r;
}

int main(){
  double num;
  cout << "The square root by Babylonian method." << endl;
  cout << "Give me the number to evaluate the method: " << endl;
  cin >> num;
  cout << "The square root is : " << square(num) << endl;
  return 0;
}