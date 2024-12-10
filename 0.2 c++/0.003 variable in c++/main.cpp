#include<iostream>
#include<string>
using namespace std;

int main(){
 //variable is type of containor which store some value like we want to store the mark you got in your exam we use variable
 //example
 int a = 100;//this is a variable this stoer the value 100 its maximum value is 4 byte
 //in c++ we use these following tag to make variable
 //int for interger its maximum value is 4 byte
 int b = 200;
 cout<<b<<endl;
 //short: Used for smaller integer values. Typically 2 bytes.
 //example
 short height = 150;
 cout<<height<<endl;
 
 //long: Used for larger integer values. Typically 4 or 8 bytes
 // example 
 long population = 7500000;
 cout<<population<<endl;
 //long long: Used for even larger integers. Typically 8 bytes
 //example
 long long distance = 9876543210LL;
 cout<<distance<<endl;
 //unsigned: Used for non-negative integers
 unsigned int positiveCount = 123;
 cout<<positiveCount<<endl;
 // float: Used for single-precision floating-point numbers. Typically 4 bytes
 float temperature = 36.5f;
 cout<<temperature<<endl;
 // double: Used for double-precision floating-point numbers. Typically 8 bytes
  double pi = 3.141592653589793;
  cout<<pi<<endl;
 //long double: Used for extended precision floating-point numbers. Typically more than 8 bytes.
 // example
  long double e = 2.718281828459045L;
  cout<<e<<endl;
 // char: Used for storing single characters. Typically 1 byte. 
 //example
 char grade = 'A';
 cout<<grade<<endl;
 //bool: Used for boolean values (true or false).
 // example
 bool isRaining = false;
 cout<<isRaining<<endl;//output is 0 because false is 0 and true is 1
 //arrays
 int arr [5]={1,2,3,4,5};//it store multiple value in 1 variable
 // to make array we must follow this
 //dataType arrayName[arraySize];
 //here arr[1]is 2 the posotion of caracter is called index
 //we can take element at a index by this step arrayname[index]
 //index always start from 0
  cout<<arr<<endl;//it will not show the element of arr it will display the variable location in ram
 //when we make ram store variable in a location
 //to display arr element we must do
 
 for(int i=0;i<=4;i++){//leave it if you didnot understand it we will learn it leater
 	cout<<arr[i]<<endl;
 }
 //pointer
 //as i already said when we make a variable ram store the variable in a location and a variable which store the location of a variable is called pointer
 //we can make pointer by this step
 //datatype * pointername = & varible 
 int i;
 int * j=&i;//store the location of i
 cout<<j<<endl;
}

