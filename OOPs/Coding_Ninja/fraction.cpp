class Fraction{
    private:

    int numerator;
    int denominator;
    
    public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;

    }
    void display(){
        cout <<this->numerator<<"/" <<this->denominator <<endl;
    }
    void simplify(){
        int gcd = 1;
        int j = min(this->numerator ,this->denominator);
        for(int i = 1; i<=j; i++){
            if(this->numerator %i == 0 && this->denominator%i == 0){
                gcd = i;
            }
        }
        this->numerator = this ->numerator/gcd;
        this->denominator = this ->denominator/gcd; 
    }
    void add(Fraction f2){
        int LCM = denominator * (f2.denominator);
        int x = LCM/denominator;
        int y = LCM/f2.denominator;
        int num = x*numerator +(y*f2.numerator);

        numerator = num;

        denominator = LCM;
        simplify();
    }
    void multiply(Fraction f2){
        numerator = numerator * f2.numerator;
        denominator= denominator * f2.denominator;

        simplify();
    }
 
};