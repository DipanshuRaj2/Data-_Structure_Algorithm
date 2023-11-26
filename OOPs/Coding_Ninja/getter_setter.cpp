#include<iostream>
using namespace std;
class Employee{
   private:
   int salary;

   public:
   void display(){
    cout << "salary " <<salary;
   }

   int getSalary(int s){
     return salary;
   }
   void setSalary(int s){
     salary = s;
   }
};
int main(){
    Employee e1;

    e1.setSalary(24);
    e1.display();


}