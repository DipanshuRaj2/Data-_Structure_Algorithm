class Student2
{
public:
    int rollNumber;

private:
    int age;

public:
    
    //default constructor
    /*Student2(){
     cout <<"Constructor Called !" <<endl;
    }*/
    //parameterized constructor

    Student2 (int r ){
        cout <<"contructor 2 called ! " <<endl;
        this-> rollNumber = rollNumber;   
    }

    Student2(int a , int r){

        cout <<"this : "<<this <<endl;
        cout <<"contructor 3 called ! " <<endl;
        age = a;
        rollNumber = r;
    }

    void display()
    {
        cout << age << " " << rollNumber <<endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a){
        age = a; 
    }
};
  