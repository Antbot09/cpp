#include<iostream>
using namespace std;

int main(){
    int n,temp, sum=0, res;
    cout<<"Enter the number :";
    cin>>n;
    temp=n;
    while (n>0)
    {
        res = n%10;
        sum +=(res*res*res);
        n=n/10;
    }
    if (temp==sum)
    cout<<"Is a armstrong number";
    else
    cout<<"Not a armstrong number";
    return 0;
}