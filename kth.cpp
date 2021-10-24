#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,34,67,78,54,78,99}, n = 7, k = 3;

    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[k-i-1]<<" ";
    }
    
    return 0;
} 