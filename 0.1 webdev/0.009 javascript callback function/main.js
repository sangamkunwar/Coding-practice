// callback is use as argument but bit different from other in callback we pass function like here in callback() is written we can also write 
/*function fun1(callba){
    let data = "this is data"
    console.log("hello",data)
    callba(data)
}
function fun2(data){
    console.log("hi",data)
}
fun1(fun2)*/
//it mean callback is a argument where we pass function inset of variable
function fun1(callback){
    let data = "this is a data"
    console.log("hello",data)
    callback(data)
}
function fun2(data){
    console.log("hi",data)
}
fun1(fun2)
//here we pass function in argument and in argument we pass variable and in variable we pass function
//so the output is `hello this is a data hi this is a data`