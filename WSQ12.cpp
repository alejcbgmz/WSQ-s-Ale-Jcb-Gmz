//WSQ12 Alejandra  https://www.youtube.com/watch?v=FYpoe0edKFg
#include <iostream>
using namespace std;

int gcd(int A,int B){
	int res=1;
	for(int i=1; i<=A; i++){
		if((A%i==0) && (B%i==0)){
			res=i;
		}
	}
	return res;
}

int main(){
	int A, B;
	cout<<"Give the first positive value"<<endl;
	cin>>A;
	cout<<"Give the second positive value"<<endl;
	cin>>B;
	int res=gcd(A,B);
	cout<<"The greatest common divisor is "<< res<<endl;
	return 0;
}