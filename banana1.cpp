#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

float deviation( vector<int> v, int size, int sum){
  float deviation;
  int i;
  float Sum_dif =0.0;
    float avg = average(sum, size);
  for (i=0; i < size;i++ ){
    Sum_dif += ((v[i] -avg) *(v[i] - avg));
  }
  deviation = sqrt(Sum_dif/size);
  return deviation;
}

float average(float sum, int lines){
  float average;
  average=sum/(lines);
  return average;
}

void readNumbers(string namefile){
  ifstream file (namefile); // opening the namefile
  string line;
  vector<int> number;
  int line_number=0, sum =0;
  if (file.is_open()){
    while (getline(file, line)){
      int x = atoi(line.c_str());
      number.push_back(x); // calling
      sum += number [line_number];//counting numbers
      line_number++;
    }
  }
  cout << "The total of the values is "<< sum << endl;
  cout << "The number of values is "<< line_number << endl;
  cout << "The average of the values is "<< average(sum,line_number) << endl;
  cout << "The standart deviation of the values is " << deviation(number, line_number, sum) <<  endl;
}

int main(){
  readNumbers("random_numbers.txt");
  return 0;
}