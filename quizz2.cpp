#include <iostream>
#include <math.h>
using namespace std;

long long superpower(long long a, long long b){
	long long potencia = pow(a, b);
	return potencia;
}

int main(){
	long long num, pot;
	cout << "Give me the base: ";
	cin >> num;
	cout << "Write the number to increase the base: ";
	cin >> pot;

	cout<<superpower(num, pot)<<endl;
	return 0;
}
