#include <iostream>
using namespace std;
class Students{
  public:
  int age;  
  Students(){
    cout << "Default contructor" << endl;
  }

  Students(int a){
    age = a;
  }
  void display(){
    cout <<"age "<< age <<endl;
  }
};
int main(){
    Students s1(2);
    
    s1.display();

    Students s2(s1);
    s2.display();

    Students *s3 = new Students(9);
    s3->display();

    
    Students *s4 = new Students(*s3);
    s4->display();

    Students s5(123);
    s5.display();
    Students s6(21);
    s6.display();
    
    s6 = s5;

     


  

}
