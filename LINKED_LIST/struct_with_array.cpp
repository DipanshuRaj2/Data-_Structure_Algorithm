#include<bits/stdc++.h>
using namespace std;

struct Dob  
{
    int day;
    string month;
    int year;
};

int main(){
/*
    Dob student1;
    student1.day = 10;
    student1.month = "Dec";
    student1.year = 1998;
  
    cout <<student1.day<<" "<<student1.month<<" " <<student1.year<<" ";
*/

//Use array with the link list

    Dob students[2000];
    students[0].day = 10;
    students[0].month = "Dec";
    students[0].year = 1998;

    cout <<students[0].day<<" "<<students[0].month<<" "<<students[0].year;
}

