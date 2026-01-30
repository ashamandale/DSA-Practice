#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==0){
        return 1;
    }
    int halfPow= pow(x,n/2);          
    int halfPowSqr= halfPow *halfPow;
    if(n % 2 != 0){             //  x^n if n is odd then x*x^n/2*x^n/2
       return x*halfPowSqr;
    }
    return  halfPowSqr;      // x^n if n is even then x^n*x^n
}
int main(){
    cout<<pow(2,10);
    return 0;
}