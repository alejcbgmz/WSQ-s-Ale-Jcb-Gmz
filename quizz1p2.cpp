#include <iostream>
#include <string>
using namespace std;

string first(int A){
	int medida=0;
	for (int i = 0; i<=A;i++)
	 {
	 	for (int j = 0; j < medida; j++) 
	 	{
	 		cout<<"T";
	 	}
	 	cout<<endl;
	 	medida++;
	 }
	 for (int i = A-1 ; i >= 1; i = i-1)
	{
		for (int j = 1; j <= i; j = j+1)
		{
			cout << "T";
		}
		cout << endl;
		medida--;
	}
	return "";
}
int main (){
	int medida=0, B;
	cout<<"Give the lengh of the triangle"<<endl;
	cin>>B;
	cout<<first(B)<< endl;
	return 0;
}