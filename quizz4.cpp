#include <iostream>
#include <string>
using namespace std;

string inverse(string phrase){
	string drow;
	for (int i=(phrase.length()-1);i>=0;i--){
		drow += phrase[i];
	}
	return drow;
	
}

bool Palindrome(string x){
	string y = inverse(x);
	for (int i=0;i<=x.length();i++){
		if(x[i]!=y[i]){
			return false; 
		}
	}
	return true;
}

int main (){
	string phrase;
	cout<< "Write to check: "<<endl;
	cin>> phrase;
	
	cout << phrase << endl << inverse(phrase) << endl;
	bool answer = Palindrome(phrase);
	if (answer==true){
		cout << "Is Palindrome" << endl;
	} else {
		cout << "Is not Palindrome" << endl;
	}		
	return 0;
}