// Alejandra Estephania Jacobo Gómez
#include <iostream>
#include <vector>
using namespace std;

int seeker(vector <int> v1){
  int sum;
  for (int i = 0; i < v1.size (); i++){
    if ((v1 [i] % 3) == 0){ // here you check if is divisible by 3
      sum = v1 [i]+ sum;  // then you sum the value if its right
    }
  }
  return sum;
}

int main (){
  int A; 
  vector <int> list;
  int B;
  cout << "How many values you will use? " << endl;
  cin>> B;
  cout << "Insert the value. " << endl;

  for (int i = 0; i < B; ++i)
  {
    cin >> A;
    list.push_back (A);
  }
 
  cout << "The sum of the numbers divisible by 3 is : " << seeker(list) << endl;
  cout<<" This program has ended. "<<endl;
  return 0;
}