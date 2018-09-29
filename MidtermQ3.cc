#include <iostream>
using namespace std; 
unsigned long long int Fibonacci(unsigned long long int x, unsigned long long int y){
  unsigned long long int temp = x+y; 
  return temp;
}

int main(){
  int  sum;
  unsigned long long int sequence[100];
  sequence[0] = 0;
  sequence[1] = 1; 
  
    for(int k=2;k<100;k++){
      sequence[k] = Fibonacci(sequence[k-2], sequence[k-1]);
    }
    // Start from 2 and add every 3 number after it together
    for(int f=0;sequence[f+3]< 1000;f+=3){
      sum += sequence[f+3]; //0 + 2 + 
    }
    // Print every even numer summed up. (Should equal 798)
    cout <<"Every number in fibonacci sequence under 1000 added up is "<< sum <<"."<< endl; 

}
