#include<iostream>
#include<string>
using namespace std;
class person{
	private:
		string name;
		int age;
		string father;
		string mother;
	public:
		person(string name, int age, string father, string mother): name(name), age(age), father(father), mother(mother){
			
		}
		void getdata(){
			cout<<this->name<<this->age<<this->father<<this->mother<<endl;
		}
		friend class Employee;//this is a friend function what it does is that it allow us to asccis the private data of this but not other
};
class Employee {
	private:
   		int salary;
    	string bankAccount;
    	int id;

	public:
		
    	Employee(int salary, string bankAccount, int id) : salary(salary), bankAccount(bankAccount), id(id) {
    		
    	}

    	void getData(person & p) {//here we have passed the location of a object of class p if we just wrote person p it can work but its not good way
    	// just person p is the copy of object p if we wanted to change the value of person p it wouldn't work because it is the copy of person p
    	
        	cout <<"employee age is "<<p.age<<endl//look here i can asccis the private member of class p
        	//if we didnot make it friend it would throw error
			<<"employee name is "<<p.name<<endl
			<<"employee mother name is "<<p.mother<<endl
			<<"employee father is "<<p.father<<endl
			<< "Employee ID is " << this->id <<endl
			<< "Employee salary is " << this->salary<<endl
			<< "Employee bank account is " << this->bankAccount << endl;
    	}
};
int main(){
	person a("sanga", 12, "shiva", "muna");
	Employee sangam(10000, "1234", 1);
	sangam.getData(a);//passing the object a of class person 
}

