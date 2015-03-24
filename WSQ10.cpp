//Alejandra Jacobo Gómez
//WSQ10
#include <iostream>
#include <math.h>
using namespace std;

int main() {

int A, B ,sum=0, counter=0;
float average=0;

cout<<"Please introduce the number of values you will use: ";
cin>>A;

float array [A]; //Here is the amount of the number you will use.  
// Here you are asking to the user what values you´ll use,
for(counter=0; counter<A; counter++){
	cout<< "give me the values"<< endl;
	cin>>B;
	sum=sum+B;
}
// Here  I print the results!!! 
cout<<"The total of the numbers is: "<<sum<<endl;
average= sum /A; // also here i made the operation, for average. 
cout<<"The average is: "<<average<<endl;
// so here we declated a news varibles
int C;
float desv;
for (C=0; C<A; ++C) 
{
 desv=(array[C]-average)*(array[C]-average)+desv;
}

float standard = sqrt(desv/A);

cout<<"The standard desviation is: "<<standard<<endl;
return 0;
}
















// using do while!!

/*do{
	cout<< "give me the values"<< endl;
	cin>>B;
	sum=sum+B;
	counter= ++counter;
}while (counter<A);
cout<<"The total of the numbers is: "<<sum<<endl;

// Here I will do the average !!
cout<<"The total of the numbers is: "<<sum<<endl;
average= sum /A;
cout<<"The average is: "<<average<<endl;
return 0;
}
//vector<int> count (4);
*/