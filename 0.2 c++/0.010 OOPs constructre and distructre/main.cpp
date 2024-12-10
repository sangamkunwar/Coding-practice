#include<iostream>
#include<string>
using namespace std;
class Employee {
	private:
   		int salary;
    	string bankAccount;
    	int id;

	public:
		
    	Employee(int salary, string bankAccount, int id) : salary(salary), bankAccount(bankAccount), id(id) {//this is a constructre
    	//we use constructre for many purpose
    	//when we make an object of a class the constructre is called automatically 
    	cout<<"constructre is called"<<endl;
    	//we don't need to do obj.Employee
		//i did that :salary(salary)... before teaching about it because we can't use it in normal function it is allowed in only constructre
		/*
		methode to make constructre
		classname(){
		//code
		}
		*/
    	}

    	void getData() {
			cout<< "Employee ID is " << this->id <<endl
			<< "Employee salary is " << this->salary<<endl
			<< "Employee bank account is " << this->bankAccount << endl;
    	}
    	//distructre
    	~Employee(){//this is a distructre
    	//distructre is called when its local function is ended
    	//example
    	/*
		if (1==1){
		employee obj(arg);
		obj.getData();
		}//here its local function is end by `}`so it is called here
		it is used to save to save space when the distructre is called it run the code and distroy the object 
		methode to make distructre
		~classname (arg){
	    //code
		}
		*/
    		cout<<"distructre is called"<<endl;
		}
    	
};
int main(){
	Employee emp1(10000, "123", 1);
	emp1.getData();
	if (1==1){
		Employee emp2(10000, "1234", 2);
		emp2.getData();
	}
	cout <<"hello"<<endl;
	
}

