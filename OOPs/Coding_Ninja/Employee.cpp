class Employee{
    public :
    char id;

    private :
    int age;

    public :
 //Default Contructor //freee wali constructor hain
    Employee() {
        cout <<"Contructor Called !" << endl;
    }
//parameterized constructor
    Employee(int a){
        cout <<"Address of Employee "<< this << endl;
        cout << "Only 1 parameter passed " << endl;
        age = a;
    }
    Employee(int a , char i){
        cout << "Address of Employee" <<this << endl; 
        cout <<"Two Parameter passed " << endl;
        age = a;
        id = i;
    }

    void display(){
        cout << "age = "<<age<<" "<<"id = " << id<< endl;

    }
    int getAge(){
        return age;
    }

    void setAge(int a){
        age = a;
    } 
};