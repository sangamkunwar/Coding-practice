#include<iostream>
#include<string>
using namespace std;
//sum function

int sum(int a, int b){//this a function 
//the int mean it return a intreger
//the variable in bricket is argument
//when we call function we do this
//functionname(arg);
//while calling this function if we write any thing it take the place of the variable in breaket
	int c = a+b;//calculating c
	return c;//it return c it mean that when we call this function this function is equal to c
}
//syntex for function
//datatype  functionname (){
//code
//}
//normal function
void display(){//void is also a datatype which mean nothings so it retutn nothing
	cout<<"hello"<<endl;
    //it is void so we dont need to return
}
//function with 1 argument
void greed(string name){//the variable at brecket is called argument

//when we call function and place any thing in brecket it take place of argument
	cout<<"hello"<<name<<endl;
}
//function with multiple argument
void intro(string name, string job){
	cout<<"hello "<<name<<" I am a "<<job<<endl;
}
//function with return value
int different(int a, int b){//this a function 
//the int mean it return a intreger
//the variable in bricket is argument
//when we call function we do this
//functionname(arg);
//while calling this function if we write any thing it take the place of the variable in breaket
	int c = a-b;//calculating c
	return c;//it return c it mean that when we call this function this function is equal to c
}
int main(){
 cout<<sum(5, 45)<<endl;//sum return value is c so it cout 50
 display();//calling function
 greed("sangam");
 intro("sangam","programmer");
 cout<<different(1945,57439)<<endl;
}

