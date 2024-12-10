//the loop mean to repeat a task
//there are some types of loop
//1.for loop
//2.while loop
//3.do while loop
//4.for in loop
//5.for of loop
//6.for each loop
//loop are also very important in javascript
//if any one tell you to display 1 to 10000 you must know about loop


//for loop
console.log("for loop")
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
if we console a++ first it will print a and then it will increment the value of a
++a means first it will increment the value of a and then it will print a

*/

for(let i = 0; i < 10; i++){
  console.log(i)
}
console.log("for loop end")
console.log("while loop")

//while loop
/*
syntex of while loop
while(condition){
//code
}
condition is a condition which is used to check the condition if the condition is true then the code will run otherwise the
*/
let i = 0;
while(i < 10){
  console.log(i)
  i++
}
console.log("while loop end")
console.log("do while loop")
/*
syntex of do while loop
do{
//code
}while(condition)
condition is a condition which is used to check the condition if the condition is true then the code will run otherwise the
*/
//do while loop
let i1 = 0;
do{
  console.log(i1)
  i1++
}while(i1 < 10)
console.log("do while loop end")
console.log("for in loop")
//for in loop
/*
syntex of for in loop
for(key in object){
//code
}
key is a variable which is used to make a variable and assign a value it runs only one time
*/
const person = {fname:"John", lname:"Doe", age:25};

let text = "";
for (let x in person) {
  text += person[x];
  console.log(text)
}
console.log("for in loop end")
console.log("for of loop")
//for of loop
/*
syntex of for of loop
for(variable of iterable){
//code
}
variable is a variable which is used to make a variable and assign a value it runs only one time
iterabel is a variable which is used to make a variable and assign a value it runs only one time
*/
const cars = ["BMW", "Volvo", "Mini"];
let text1 = "";
for (let x of cars){
  text1 += x;
  console.log(text1)
}
console.log("for of loop end")
console.log("for each loop")
//for each loop
/*
syntex of for each loop
array.forEach(function(currentValue, index, arr), thisValue)
currentValue is a variable which is used to make a variable and assign a value it runs only one time
index is a variable which is used to make a variable and assign a value it runs only one time
arr is a variable which is used to make a variable and assign a value it runs only one time
thisValue is a variable which is used to make a variable and assign a value it runs only one time
*/
const fruits = ["apple", "banana", "cherry"];
fruits.forEach(myFunction);
function myFunction(item, index) {
  console.log(index + ": " + item);
}
console.log("for each loop end")
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
console.log(hello)
}
it is false because 5==5 is true but javascript take true as 1 and 1==5 is false
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
  console.log("if condition")
}
//if else condition
console.log("if else condition")
if (1 == 2){
  console.log(1)
  
}else{
  console.log(2)
}
//if else if else condition
console.log("if else if else condition")
if(1==3){
  console.log(1)

}else if(3==3){
  console.log(3)
}
else{
  console.log(2)
}
//if else in short
let a =1
a = 1 ? console.log(1,"if else in short") : console.log(2,"if else in short")

//switch case condition
//switch case condition is used to check the value of variable and if the value is equal to any value then it will run the
console.log("switch case condition")
let day = "sunday";
switch(day) {
  case day=="monday":
    console.log("today is monday")
    break;//break means to stop the code
  case day=="sunday":
    console.log("today is sunday")
    break;
  default:
    console.log("today is good day")
}
//finally
//finally is a block of code which is always run in any condition
try {//try is a block of code which is used to try to run a code
  console(sdjfj)
}
catch(err) {//catch is a block of code which is used to catch the error
  console.log(err)
}
finally {
  console.log("finally")
}