#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

long long fibonnaci(long n){
	if(n==0||n==1){
		return 1;
	} else{
		return (n-2)+(n-1);
	}
	
}

int main (){
long long int A;
cout << "Put a number to make the fibonacci until that number." << endl;
cin>>A;

for (long long i=A; i<=A; i++){
	cout<< "The fibonacci of " << i << " is " << fibonnaci(i) << endl;
}
return 0;
}