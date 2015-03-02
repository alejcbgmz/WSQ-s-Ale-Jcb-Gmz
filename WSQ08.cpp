//Alejandra Estephania Jacobo Gómez

#include <iostream>
using namespace std;

//When you want to make the sum
int Mysum(int c, int d){
	int answer= c+d;
	return answer;
}
// now is time for products
 int Myprod(int c, int d){
 	int answer=c*d;
 	return answer;
 }

 // now divide !!
 double Mydiv(double c, double d){
 	double answer=c/d;
 	return answer;
 }

int main () {
	int A,B; // the variables for my program
	cout<<"   These program make different kind of operations " << endl;
	cout<<"   Give the first value  " << endl;
	cin>>A;

	cout<< "   Give the second value  " << endl;
	cin>>B;

// in this part I print the answers
	cout<< " The values you gave me receive are "<< A<< "  and "<<B<< endl;
	int sum= Mysum(A,B);   // here I indicated the procedure;
	cout<< " The sum of those values are " << sum << endl;

	int prod= Myprod(A,B);
	cout<< " The product of those values are " << prod<< endl;

	double divi= Mydiv(A,B);
	cout<< " The division of those values are " << divi<< endl;

	return 0;
}
