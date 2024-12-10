#include<iostream>
#include<string>
using namespace std;
class person{//this is a class 
	protected://this is a protected tag 
	//these are protected members
	//we made it protected because if we made it private it would throw error
	//because only friend class can asccis private member not derived class **i'll tell that is derived class**
	//protected can be asccis by derived class but not external function
	
		string name;
		int age;
		string father;
		string mother;
	public:
		person(string name, int age, string father, string mother)
		: name(name), age(age), father(father), mother(mother){
			
		}
		void getdata(){
			cout<<"hello "<<this->name
			<<" are you "<<this->age
			<<" year old and your father is "<<this->father
			<<" and mother is "<<this->mother<<endl;
		}
		void greed(){
			cout << "hello! " << name << " how is your father and mother " << father<<" and " << mother << endl;
			if (age<18){
				cout << "you are less than 18"<<endl;
			}else{
				cout << "you are older than 18" <<endl;
			}
		}
		};
class Employee : public person {//inhariting person class to employee
//here i have done 
/*
class Employee : public person {...}
the employee class is extenting the class person
it mean the function of the class person can be used by class employee
and public mean the function we extend that must be public 
if we want no external function can use the function extend from class person we can make it private
*/
//base class and derived class
//The class whose members are inherited is called the base class, and the class that inherits those members is called the derived class

	private:
   		int salary;
    	string bankAccount;
    	int id;

	public:
		
    	Employee(int salary, string bankAccount, int id, string name, int age, string father, string mother):
		salary(salary), bankAccount(bankAccount), id(id), person(name, age,father,mother) {
		//here the person(...) mean to pass the argument to constructre of class preson
    		
    	}

    	void getData() {
        	cout <<"employee age is "<<this->age<<endl
			<<"employee name is "<<this->name<<endl
			<<"employee mother name is "<<this->mother<<endl
			<<"employee father is "<<this->father<<endl
			<< "Employee ID is " << this->id <<endl
			<< "Employee salary is " << this->salary<<endl
			<< "Employee bank account is " << this->bankAccount << endl;
    	}
};
int main(){
	Employee Emp1(1000, "123", 1, "sangam", 12, "shiva", "muna");
	Emp1.greed();//look the greed function is not define in class person but in person
	//it mean we need not to define one function repetively if it is same
	Emp1.getdata();
	Emp1.getData();
}

