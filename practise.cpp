#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int largest(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int smallest(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main() {
    int T;
    cout<<"Enter the size: "<<endl;
    cin>>T;
    if(T==0){
        cout<<"-1";
        return 0;
    }
    int arr[T];
    for(int i=0;i<T;i++){
        cin>>arr[i];
        cout<<" ";
    }
    for(int i=0;i<T;i++){
       if(arr[i]<0){
        arr[i]=arr[i]*-1;
       }
    }
    int maxi=largest(arr,T);
    int mini=smallest(arr,T);
    for(int i=mini;i<=maxi;i++){
        int flag=0;
        for(int j=0;j<T;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i;
        }
    }
   
    return 0;
}
