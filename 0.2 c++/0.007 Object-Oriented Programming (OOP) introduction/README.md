# Object-Oriented Programming (OOP) in C++

Object-Oriented Programming (OOP) is a programming paradigm that uses "objects" to design applications and computer programs. C++ is a language that supports OOP principles, which include encapsulation, inheritance, polymorphism, and abstraction.

## Key Concepts

### 1. Encapsulation

Encapsulation is the bundling of data and methods that operate on the data within one unit, typically a class. It restricts direct access to some of an object's components, which can prevent the accidental modification of data.

```cpp
class Example {
private:
    int data;

public:
    void setData(int value) {
        data = value;
    }

    int getData() {
        return data;
    }
};
```
## Inheritance
Inheritance is very important in oops. When we have many classes in our program and the function of most of the classes are same we use inheritance. In inheritance we have 2 or more classes, the class whose members are inherited is called the base class, and the class that inherits those members is called the derived class. Here is the example of inheritance in c++
```cpp
class base {
    private:
    int x;
    int y;
    public:
    void getdata(){
        cout << "hello";
        cout << a << b;
    }
    void setdata(int a, int b){
        x=a;
        y=b;
    }
};
class derived : public base{
    public:
    string name;
    public:
    void greed(string person){
        name = person;
        cout<<"hello"<<person;
    }
}
int main(){
    base a;
    a.setdata(1,2);
    a.getdata();
    derived b;
    b.setdata(1,2);//it is derived from base class so it will run
    b.getdata();
    b.greed("sangam");
}
```
## polymorphism
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance. Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks.
```cpp
class base {
    private:
    int x;
    int y;
    public:
    void getdata(){
        cout << "hello";
        cout << a << b;
    }
    void setdata(int a, int b){
        x=a;
        y=b;
    }
};
class derived : public base{
    public:
    string name;
    public:
    void greed(string person){
        name = person;
        cout<<"hello"<<person;
    }
}
class derived2 : public base{
    public:
    string name;
    public:
    void sayname(string person){
        name = person;
        cout<<"hello I am "<<person;
    }
}

int main(){
    base a;
    a.setdata(1,2);
    a.getdata();
    derived b;
    b.setdata(1,2);
    b.getdata();
    b.greed("sangam");
    derived2 b1;
    b1.setdata(1,2);
    b1.getdata();
    b1.sayname("sangam");
}
```
## abstraction
Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.
```cpp
#include<iostream>
using namespace std;
 
class Vehicle
{
  private:
          void piston()
        {
            cout<<"4 piston\n";
        }
 
        void manWhoMade()
        {
            cout<<"Markus Librette\n";
        }
    public:
        void company()
        {
            cout<<"GFG\n";
        }
        void model()
        {
            cout<<"SIMPLE\n";
        }
        void color()
        {
            cout<<"Red/GREEN/Silver\n";
        }
        void cost()
        {
            cout<<"Rs. 60000 to 900000\n";
        }
        void oil()
        {
            cout<<"PETRO\n";
        }
};
int main()
{
     
    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}
```