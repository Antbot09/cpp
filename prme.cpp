#include<iostream>
using namespace std;

int main(){
    int n, m, flag=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    m = n/2;
    if (n<=1)
    return false;
    for (int i = 2; i < n; i++)
    {
        cout<<"Not a prime number";
        flag=1;
        break;
    }
    if (flag==0)
    cout<<"Is a prime number";  
    return 0;
}