#include <iostream>
using namespace std;

//declaring global variables
int arraysize;
void PrintSmallestNLargest(int TheArray[]){
  int x = TheArray[0];
  int y = TheArray[0];
  for (int k = 1; k < arraysize; k++){
        if ( x < TheArray[k]){//Find largest
          x = TheArray[k];
        }
        if ( y > TheArray[k]){//Find smallest
          y = TheArray[k];
        }
  }
  
 
  cout <<"Largest number in the array is "<< x <<" ."<< endl;  
  cout <<"Smallest number in the array is "<< y <<" ."<< endl;  
}

int main() {
  cout << "Enter an array size" << endl;
  cin >> arraysize;
  int array1[arraysize];
  for (int i = 0; i< arraysize; i++) {
    cout <<" Enter your a number: Array["<< i <<"]: ";
    cin >> array1[i];
  }
  for (int j = 0; j < arraysize; j++){
    if(j<arraysize-1){cout << array1[j] << ", ";}
    else{
      cout << array1[j]<< "."<< endl;
      break; 
    } 
  }
  PrintSmallestNLargest(array1);
}