#include<iostream>
using namespace std;
int factorial(int n){
    // int res=1;
    // for(int i=2;i<=n;i++)
    // res *=i;
    // return res;
    if(n==0)
    return 1;
    return n*factorial(n-1);
}

int main(){
    int num = 4;
    cout<<"Factorial of "<<num<<" is :"<<factorial(num);
    return 0;
}

