//print nCr number 
//Example 3C2 =3!/2!*(3-2)!
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

   int fact =1;

   for(int i=1; i<=n; i++)
    {
     fact =fact*i;
    }
  return fact;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r)* factorial(n-r);
 
    int  ans= num/denom;
    return ans;
     
}

int main(){
    int n, r;
    cin >> n >> r;

    cout<<"Answer is "<<nCr(n ,r)<<endl;
}


