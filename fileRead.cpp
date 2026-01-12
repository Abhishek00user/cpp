#include<iostream>
#include<fstream>

using namespace std;

int main(){
ifstream fin;
char ch;
fin.open("myFile.dat");
ch=fin.get();  //to show spaces get function is used instead of fin>>ch
// fin>>ch;
// cout<<ch;
// fin>>ch;
// cout<<ch;
while(!fin.eof()){
    cout<<ch;
   ch=fin.get();
}
fin.close();
return 0;
}