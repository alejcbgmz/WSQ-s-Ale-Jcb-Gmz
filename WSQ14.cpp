#include <iostream>
#include <cmath>
using namespace std;

float fun (float B)
{
	float x;
	float R=0.0, Rf=0.0;
	float factorial= 1;
	for(x=1; x<=B; x++)
	{
		factorial = factorial * x;
		R = R + 1/factorial;
	}
	Rf = R + 1;
	return Rf;
}
int main ()
{
	float A;
		cout<<"Calculating  e"<<endl;
		cout<<"Give me  the value"<<endl;
		cin>>A;
	    float factorial = fun(A);
		cout<<"The constant e is :  "<< factorial <<endl;
	return 0;
}