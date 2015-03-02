 // Alejandra Jacobo Gómez 
// SUM N NUMBERS
#include <iostream>
using namespace std;

int main(){
	int A, B, C, suma=0;

	cout<<" Please give us lower bond " << endl;
	cin>> A ;
	cout<<" Please give us upper bond" << endl;
	cin >> B ;
	C=A;
do{
	suma=suma+C; 
	C= C+1;
	} while(C<=B); 
	cout<< " the sum from  " << A << " to  " << B << " is = " <<  suma<< endl; 
	return 0;
}