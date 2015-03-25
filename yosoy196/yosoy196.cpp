// Alejandra Estephania Jacobo Gomez  A01229730
#include <string>
#include <iostream>
using namespace std;
#include "BigIntegerLibrary.hh"

BigInteger invertir (BigInteger n){
	string s = bigIntegerToString(n);
	reverse(s.begin(),s.end());
	BigInteger inversa = stringToBigInteger(s);
	return inversa;
}
int main() {
int less,high,numero,p,z,pal=0,lychrel=0,natural=0;
BigInteger t;
BigInteger counter=0;
BigInteger sum=0;

cout<<"Dame el menor valor"<<endl;
cin>>less;
cout<<"Dame el mayor valor"<<endl;
cin>>high;

for(counter=less;counter<=high;counter++){
	for(BigInteger m=counter; m<=counter;m++){ 
	t=invertir(m); sum=t+counter;}  
	if(counter == t) { 
		natural=natural+1;
	} else {
		int veces = 0;
		BigInteger candidato = counter;
		t=invertir(candidato);
		while(candidato != t && veces < 30){
			candidato = candidato + t;
			t = invertir(candidato);
			veces=veces+1;
		}
		if(veces < 30){
			pal = pal + 1;
		} else {
			cout << "Lychrel found " << counter << endl;
			lychrel = lychrel +1;
		}
	} 
}
cout<<"Natural Palindrom: "<<natural<<endl;
cout<<"Non lychrel become palindrom in one interacion: "<<pal<<endl;
cout<<"Lychrel Candidate: "<<lychrel<<endl;
return 0; 
}