#include <iostream>
using namespace std;
//declaring global variables
int arraysize;
int main() {
  cout << "Enter an array size" << endl;
  cin >> arraysize;
  int array1[arraysize];
  for (int i = 0; i< arraysize; i++) {
    cout <<" Enter your a number: Position["<< i <<"]";
    cin >> array1[i];
  }
  for (int j = 0; j<arraysize; j++){
    if(j<arraysize-1){cout << array1[j] << ", ";}
    else{cout << array1[j]<< "."<< endl;} 
  }
}
