#include<iostream>
#include<string>
using namespace std;
//i have copied from previus file
class employee{
	private://this is a private tag 
	//it mean we can't asccis the data of private member of a class from external function 
	//only the member of the class can asccis the private member data
		int salary;
    	string bankAccount;
    	int id;
	public://this tag is public tag the elemement inside public tag that can be asscis by external function like in int main 
    employee(int salary, string bankAccount, int id) : salary(salary), bankAccount(bankAccount), id(id) {}

    void getData() {
        cout << "Employee ID is " << this->id << ", Employee salary is " << this->salary << ", Employee bank account is " << this->bankAccount << endl;
    }
};
int main(){
	employee emp(5000, "12345", 1);
    emp.getData();
    //emp.id; //this will throw the error; id is a private member so we can't asscis it by external methode int main()is a external function from class wmployee 
    // and why emp.getData(); not throw error 
    //because the getData is a public member
	}

