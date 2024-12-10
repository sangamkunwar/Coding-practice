
//normal function
function fun1 () {
    console.log("hello from normal function")
    //this just console "hello from normal function"
}

fun1();//calling function

//function with argument
function fun2 (con) {//here the con is a argument if we pass a variable here it will take place of con
    console.log(con)
}
let hello = "hello from function with 1 arugment"
fun2(hello);//calling function 
//here when we put a variable in breacket and if in the defination of function there is a argument it takes the place of argument
/*like here
  function fun1 (con) {
    console.log(con)//variable con take the place of variable hello 
}
*/
//function with multiple argument
function fun3 (con, arg) {
    console.log(con,arg)
}
let hello1 = "hello from function with multiple argument"
let hello2 = "again hello from function with multiple argument"

fun3(hello1, hello2);

//function with defoult argument **spelling is wrong**
function fun4 (con, arg="again hello from function with defoult argument") {//defoult argument is always in right if we dont pass an argument place of a defoult argument the defoult value takes the place and do its work
    console.log(con,arg)
}
let hello3 = "hello from function with multiple argument"


fun4(hello3); 


//arrow function
const afun1 = (con)=>{//this is a arrow function in a variable like here. we delayer a variable and the basic syntex of arrow function is 
    /*
    const var = (arg)=>{
        //ur command 
    }
    */
    console.log(con)
}
let afun1hello="hello from arrow"
afun1(afun1hello)
//in arrow function other all is same
// we can 