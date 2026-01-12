#include<iostream>
using namespace std;

union myUnion{
    int value;
    char ch;
};
int main(){
    myUnion u;
    u.value=1;
    u.ch='a';
    cout<<u.value; //it will throw garbage value union can only hold value of one member at a time
    cout<<u.ch;
    return 0;
}