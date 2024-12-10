// basic variable
let a = "hello"; //the let mean to make a variable the variable can be make by let const or var
console.log(a);

//data types

  //there are some data types in javascript they are:-
    //1.string example "hello" we decleare string by using double quote("") or single quote('')
    //2.number we decleare number by using number is also called integer
    //3.boolean we decleare boolean by using true(1) or false(0)
    //4.null nul is also a data type it is used to make a variable but it is not assigned any value
    //5.undefined undefined is a data type which is not decleared any value and not defined
    //6.symbol symbol is a data type which is a primitive data type, just like Number, String, Boolean, etc  example let person = { name: "Jack" }; let id = Symbol("id"); person[id] = "Another value";
    //7.object object is a data type which stores the key value pair example let person = { name: "Jack" }; name is key and "jack" is value
    //8.bigint bingint is a data type which is used to store the big integer example let bigInt = 1234567890123456789012345678
    //9.set set is a data type which is used to store the unique values example let set = {1,2,3}
    //10.array array is a data type which is used to store the multiple values example let array = [1,2,3]

// we use let, var and const tag to make a variable
//usally we use let rather than var and const to make a variable and const to make a constant variable and function
//as a javascript programmer we need not to learn datatype deaply but we need to learn how to use datatype
//in other language we need to learn datatype deaply but in javascript we need to learn how to use datatype like cpp,c,c#,java,php,ruby,etc
//I dont mean to not to learn datatype we need to know about datatype if we are going to make larg website or mobile app or any other app we need to learn about datatype
//we can use typeof to know the data type of a variable
//example
//tag    variablename   =    value
  let     a1            =    "hello";
console.log("a1 is ", typeof a1); //it will print string
/*
in c, c++ and java we make variable like this
//datatype    //variablename //=   //value
int             a             =     10;
float           b             =     10.5;
*/

//decleare a variable
let b;// we decleare a variable by using let we can use var also but we dont use var using var is not so good
b = "hello by b";//when we decleare a variable we can assign a value to it
console.log(b);
//static and normal
//there are no static variable in js
//object
let obj = {
//  key   value
    name: "hello",
    age: "20",
    gender: "male"
}
console.log(obj);
//array
// there are some roules in array 
  //1.array start from 0
  //2.array can store multiple values
  //3.array can store multiple datatypes
  //4.the count or posotion of array value is called index
let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
console.log(arr)
arr.push(11)//we can add a value in array by using push method
console.log(arr)
arr.splice(1,0, 11)//we are writing 0 not to replace value at index 1 but to add value at index 1
console.log(arr)