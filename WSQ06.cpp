#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main (){
	int A, B, C=0 ;

srand(time (NULL));
A = rand () % 100 + 1;

do{
	cout << "Try a guess"  << endl;
	cin >> B;
	C=C+1;

	if (B < A){
		cout << "Wrong!, it's too low" << endl;
	}
	if (B>A) {
		cout << "Wrong!, it's too high" << endl;
	}

} while ( B!=A);
  cout << "You got it!! you guess the number." << endl;
  cout << "You try to gueess the number " << C<< " times"  << endl;
			cin >> C;
return 0;

}