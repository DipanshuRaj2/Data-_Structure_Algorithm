#include<iostream>
using namespace std;

int fact(int n){

    int prod = 1;
    for(int i = 1; i <= n; i++){
     
            prod = prod * i;

    }
    return prod;

}

int nCr(int n , int r){
    int num = fact(n);
    int denom = fact(r) *fact( n- r);
    int ans = num/denom;

    return ans ;
}


int main(){

    int n , r;
    cin >> n >> r;
    cout << "nCr is "<< n <<" :"<<nCr(n , r);
    return 0;
}
