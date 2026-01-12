#include<iostream>
using namespace std;

int main(){
 cout<<"welcome"<<endl;
 int i;
 cin>>i;
 try{
    if(i < 0) throw 0;
    cout<<"in try block"<<endl;
 }
//  program will run when either of the catch statement will be executed
 catch(double e){
    cout<<"Exception no :"<<e<<endl;
 }
 catch(int e){
    cout<<"Exception no :"<<e<<"-->negative no entered"<<endl;
 }
 cout<<"out of try and catch";
return 0;
}