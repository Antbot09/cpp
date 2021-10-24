#include<iostream>
using namespace std;
int fib(int n){
    int a=0, b=1, c;
    if (n<=1)
        return a;
    // for (int i = 2; i < n; i++)
    // {
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    // return c;
    return fib(n-1)+fib(n-2);
    
}
int main(){
    int n = 9;
    cout<<fib(n);
    return 0;
}