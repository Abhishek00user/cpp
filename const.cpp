#include<iostream>
using namespace std;

// Constructors are not inherited.
// Destructors are also not inherited.
// The compiler automatically calls the appropriate base constructor during object creation and the base destructor during
//  object destruction.
class Complex{
    private:
    int a,b;
    public:
    Complex(int x,int y){
        a=x; b=y;
    }
    Complex(int k){
        a=k;
        b=0; //although there is no need to b but it needs to be initialised otherwise it would contain garbage value on creation
    }
    Complex(){
        a=0;
        b=0;
    }
    Complex(Complex &obj){  //copy constructor
        a=obj.a;
        b=obj.b;
        cout<<a<<" "<<b; //shouldn't be printed here
    }
};
int main(){
Complex c1(3,4),c2,c3(5);
Complex c5=5; //not preferrred
Complex c4(4); //a method of calling constructor which has only one argument
// some other methods 
// creating a copy constructor
Complex c6=c1; // or Complex c6(c1)
return 0;
}

// defining constr outside the class 
class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student();
	void display();
	
};
// constructor created outside the class
	student::student()
	{
		cout<<"Enter the RollNo:";
		cin>>rno;
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Fee:"; 
		cin>>fee;
	} 

void student::display()
	{
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
	