#include <iostream>
#include <string>
using namespace std;
/* An Employee has a name, and ID number, title, department hourly rate and number of hours worked per week. Write a class for employee, and print using functions, employee details with their weekly wages in the descending order.*/

class Employee
{
    public:
        string name;
        string ID;
        string rate;
        string hrs;
        strings wages;

};
void PrintByWage(Employee List[])
{
  int order[ListSize] = List[0].wages; /* big to small*/ 
  for (int i = 0; i<ListSize; i++){
    
  }
  
}
int main()
{
    bool Looping = true;
    int ListSize = 3; 
    Employee List[ListSize];
    int PR = 15;
    int IT = 25;
    int Worker = 40; 
    List[0].name = David; 
    List[0].ID = 6102;
    List[0].rate = PR;
    List[0].hrs = 8;/*-----*/
    List[1].name = John; 
    List[1].ID = 6103;
    List[1].rate = IT;
    List[1].hrs = 6;/*----*/
    List[1].name = Ken; 
    List[2].ID = 6103;
    List[2].rate = Worker;
    List[2].hrs = 5;/*----*/
    for(int i = 0; i < ListSize; int++){
      List[i].rate * List[i]hrs = List[i.wages]; 
    }
    PrintByWage(List, ListSize);
}