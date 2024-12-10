#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int salary;
    string bankAccount;
    int id;

public:
    Employee(int salary, string bankAccount, int id) : salary(salary), bankAccount(bankAccount), id(id) {//this is a constructre leave about it i'll teach it leater
	//I haven't teach you (int salary, string bankAccount, int id) : salary(salary), bankAccount(bankAccount), id(id)  so let me teach it
    /*
    what it does is that it set the value of a variable 
    its syntes 
    	function (arg) : classvaruwanttosetthevaluewitharg(arg)
	salary(salary),           // Initializes the class member 'salary' with the parameter 'salary'
      bankAccount(bankAccount), // Initializes the class member 'bankAccount' with the parameter 'bankAccount'
      id(id)                    // Initializes the class member 'id' with the parameter 'id'
	*/	
    }

    void getData() {
        cout << "Employee ID is " << this->id << ", Employee salary is " << this->salary << ", Employee bank account is " << this->bankAccount << endl;
    }
};

int main() {
    Employee emp(5000, "12345", 1);//making object
    //syntex for making object
    //classname   objectname;
    //here i use constructre so i had to give () otherwise we didn't need it
    
    emp.getData();//calling getdata from class employee object emp

    return 0;
}

