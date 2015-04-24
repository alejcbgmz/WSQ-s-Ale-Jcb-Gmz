#include <iostream>
#include <vector>
using namespace std;

int Product (vector <int> v1, vector <int> v2){
  int total = 0;
  for (int i = 0; i < v1.size (); i++){
    total += (v1 [i] * v2 [i]);
  }
  return total;
}

int main (){
  vector <int> list1;
  vector <int> list2;
  int A, B, size;

  cout << "How many values you will use? " << endl;
  cin>> size;
  cout << "Values for the first list: " << endl;
  for (int i = 0; i < size; ++i)
  {
    cin >> A;
    list1.push_back (A);
  }

  cout << "Values for the second list: " << endl;
  for (int i = 0; i < size; ++i)
  {
    cin >> B;
    list2.push_back (B);
  }
  cout << "The dot product is: " << Product (list1, list2) << endl;
  return 0;
}