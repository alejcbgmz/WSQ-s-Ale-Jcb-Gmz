#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void check_banana (string filename){
  string line;
  string banana1 = "banana";
  string banana2 = "BANANA";
  int count = 0;

  ifstream myfile;
  myfile.open (filename);
  if (myfile.good() == true){
    while (getline (myfile, line)){
      transform(line.begin(),line.end(),line.begin(), ::tolower);
      if (line.find (banana1) != string::npos){
        count ++;
      }
    }
    cout << "Times of  (banana) word appears: " << count << endl;
  }
}

int main (){
  string name;

  cout << "Enter the name of the file to analyze:" << endl;
  cin >> name;
 
  check_banana (name);
  return 0;
}
