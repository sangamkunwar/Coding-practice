#include<iostream>
#include<string>
using namespace std;
void myFunction(string item,int  index) {
  cout<<index + ": " + item<<endl;
}
struct Person {//for object
    string fname;
    string lname;
    int age;
};
int main(){
 //the loop mean to repeat a task
//there are some types of loop
//1.for loop
//2.while loop
//3.do while loop
//4.for in loop
//5.for of loop
//6.for each loop
//loop are also very important in c++
//if any one tell you to display 1 to 10000 you must know about loop


//for loop
cout<<"for loop"<<endl;
/*
syntex of for loop
for(initialization;condition;increment/decrement){
//code
}
initialization is a variable which is used to make a variable and assign a value it runs only one time

condition is a condition which is used to check the condition if the condition is true then the code will run otherwise the code

incremen/decrement is a variable which is used to increment or decrement the value of variable

there are some increament and decrement methode
++a
a++
a--
--a
we can't do like this
10++
10--
++10
--10
(a++)++(because if a=2 it is a variable so first a++ will run and a=3 now it is a value so it will throw a erroe)
defination
a++ means a=a+1
if we cout a++ first it will print a and then it will increment the value of a
++a means first it will increment the value of a and then it will print a

*/

for(int i = 0; i < 10; i++){
  cout<<i<<endl;
}
cout<<"for loop end"<<endl;
cout<<"while loop"<<endl;

//while loop
/*
syntex of while loop
while(condition){
//code
}
condition is a condition which is used to check the condition if the condition is true then the code will run otherwise the
*/
int i = 0;
while(i < 10){
  cout<<i<<endl;
  i++;
}
cout<<"while loop end"<<endl;
cout<<"do while loop"<<endl;
/*
syntex of do while loop
do{
//code
}while(condition)
condition is a condition which is used to check the condition if the condition is true then the code will run otherwise the
*/
//do while loop
int i1 = 0;
do{
  cout<<i1<<endl;
  i1++;
}while(i1 < 10);
cout<<"do while loop end"<<endl;

//condition
//there are some condition in javascript
//1.if condition
//2.if else condition
//3.if else if else condition
//4.switch case condition
//if condition
/*
syntex of if condition
if(condition){
//code
}
condition is a condition which is used to check the condition if the condition is true then the code
here are some roules in if condition
if (5==5==5){
cout<<hello;
}
it is false because 5==5 is true but c++ take true as 1 and 1==5 is false
to correct it we use
if (5==5,5==5){
//code
}
*/
/*
=,==,===,!=,!==,>,<,>=,<=,||,&& are logical operator
= is not use in if condition 
we use ==,===,!=,!==,>,<,>=,<=,||,&&
== means the value is equal(1=="1")is true
=== means the value is eual and the type is also equal(1==="1")is false
! means not
< means less than
> means greater than
<= means less than or equal to
>= means greater than or equal to
|| means or
&& means and
*/
if(1 == 1){
  cout<<"if condition"<<endl;
}
//if else condition
cout<<"if else condition"<<endl;
if (1 == 2){
  cout<<1<<endl;
  
}else{
  cout<<2<<endl;
}
//if else if else condition
cout<<"if else if else condition"<<endl;
if(1==3){
  cout<<1<<endl;

}else if(3==3){
  cout<<3<<endl;
}
else{
  cout<<2<<endl;
}
//if else in short
int a =1;
 cout << ((1 == 1) ? "1" : "2") << " if else in short" << endl;
 
//switch case condition
//switch case condition is used to check the value of variable and if the value is equal to any value then it will run the
cout<<"switch case condition"<<endl;
string day = "sunday";
int dayinint = 1;
switch(dayinint) {
        case 2:
            std::cout << "today is monday" << std::endl;
            break;//break mean to stop the code
        case 1:
            std::cout << "today is sunday" << std::endl;
            break;
        default:
            std::cout << "today is a good day" << std::endl;
    }
//try catch
try {//try is a block of code which is used to try to run a code
  cout<<""<<endl;
}
catch(string err) {//catch is a block of code which is used to catch the error
  cout<<err<<endl;
}

}

