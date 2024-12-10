//there are 2 types of object 1is class and 2is object
//basic class 
// we use class tag to make a class
/*
class classname
*/ 
class employee{
     // we use static tag to make a static variable
  static id;//we dont use var,let, canst in class
  //the static tag is not used in normal variable it is aviable in class only if you try to make static variable in normal variable it will throw an error
  //static variable is a variable which belong to class not to object
  //we use static tag to make a static variable
     //the function in class is called method
  setdata(a){
    this.id = a
  }
}
const employee1 = new employee;//we use new to make a object
employee1.setdata(1)//to call a method we use object.method()
console.log(employee1.id)

//class with constuctor
class employee2{
  static name;
  static age;
  //we use constructor tag to make a constructor
  //constructor is a special method which is called when we make a object
  //in normal should call function menually but not constructre
  constructor(name,age){
    this.name = name;
    this.age = age;
    
  }
  //we can make a method in class
  display(){
    console.log(this.name,this.age)
    console.log("hello from employee with constructer")
  }
}
const employee3 = new employee2("hello",20)
employee3.display();

//inhaeritance
//we use inhaeritance to make a class which is inherited from another class it mean we can use all the method and variable of another class which we have extends
//we use extends tag to make a inhatite class
//we need not to define function in inhaeritance class
class employee4 extends employee2{
  static salary;
  constructor(name,age,salary){
    super(name,age)//we use super to call a method of parent class In JavaScript, the super function is used within a subclass to call functions on an object's parent class. It is commonly used to call the constructor of the parent class and to access its methods.
    this.salary = salary;
    this.display(salary)
  }
  display() {
    console.log(this.name, this.age, this.salary);
    console.log("hello from employee with inheritance");
  }
}
const employee5 = new employee4("hello", 20, 1000)
//multiple leval inheritance
/*
class classname extends classname2 extends classname3
*/
//if a class is inherited from multiple class it is called poloymorphism