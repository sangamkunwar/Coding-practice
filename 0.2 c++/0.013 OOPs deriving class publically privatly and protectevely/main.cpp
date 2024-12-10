#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
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
class Employee : public person {//deriving class person pubically 
//if i wrote private or protected and call person class function in int main it would throw error
//if we wrote protected person class function can be asccis by its derived class
	private:
   		int salary;
    	string bankAccount;
    	int id;

	public:
		
    	Employee(int salary, string bankAccount, int id, string name, int age, string father, string mother):
		salary(salary), bankAccount(bankAccount), id(id), person(name, age,father,mother) {
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
	Employee emp1(1000, "123", 1, "sangam", 12, "shiva", "muna");
	emp1.getData();
	emp1.getdata();
	emp1.greed();
}

