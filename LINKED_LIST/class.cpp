/*#include<bits/stdc++.h>
using namespace std;

class Dob
{
    public:
    int day;
    string month;
    int year;

};
int main(){
    Dob students[2000];
    students[0].day= 10;
    students[0].month = "Dec";
    students[0].year =1998;

    cout <<students[0].day<<" "<<students[0].month<<" "<<students[0].year;

}
*/

// function is used with class
#include<bits/stdc++.h>
using namespace std;
    struct Dob{     //class or struct same in c++ but in 'c' language there is the not same
    //   struct by default public hota hain
    //   class by default private hote hain
       
        
        int day;
        string month;
        int year; 

        void setDay(int d)
         {
            day = d;
        }
        void getDay()
        {
            cout << day;
        }

    };

int main()
{
   Dob students[2000];
   students[0].setDay(10); //it assign the value of Day
   students[0].month="Dec";
   students[0].year =1998;

   students[0].getDay();  //to print the value of day 

    cout<<" "<<students[0].month<<" "<<students[0].year;
}





