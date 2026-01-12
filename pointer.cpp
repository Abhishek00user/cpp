#include<iostream>
using namespace std;

int main(){
    int num=5;
    int *ptr=&num;
    cout<<"address :"<<&num<<endl;
    cout<<"value :"<<*ptr<<endl; //ptr stores the address of num and by using * it will give the value of the num
    cout<<"before :"<<num<<endl;
    (*ptr)++;
    cout<<"after :"<<num<<endl;

    int *q=ptr; //copying ,now ptr and q will have the same address of num
    cout<<"value after copy :"<<*q<<endl;

    // int i=3;
    // int *t=&i;
    // cout<<(*t)++<<endl;  //this will give you 3 as it is post increment
    
    int arr[5]={1,2,3,4};
    cout<<arr<<endl; //address 
    cout<<*arr<<endl;  //1
    cout<<*arr+1<<endl;  //2
    cout<<*(arr+1)<<endl; //2
    cout<<*(arr)+1<<endl;; //2
    cout<<2[arr]; //3
return 0;
}