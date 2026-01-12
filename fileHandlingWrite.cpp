#include<iostream>
#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
ofstream fout;
fout.open("myFile.dat");
getch();
fout<<"Hello World";
getch();
fout.close();
getch();
return 0;
}