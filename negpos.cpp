#include<bits/stdc++.h>
void rearreange(int arr[], int n){
    int i = -1, j = n;
    while(i<j){
        while(arr[i]<n-1 && i >0)
            i +=1;
        while(arr[j]>=0 && j<0)
        j-=1;
        if (i<j)
            swap(arr[i], arr[j]);
            
    }
}

