#include<iostream>
#include<string>
#include <stdexcept> // for invalid_argument
using namespace std;
//formula: f(n)=f(n-1)+f(n-2)
int fibbo(int n){
	if(n==1||n==2){//the first 2 number is 1
		return 1;
	}
	else if(n<=0){//there is no negetive posotion
		throw invalid_argument("Input must be a positive integer.");//what it does is that it throw error when the argument is invalid
		
	}else{
		return fibbo(n-1)+fibbo(n-2);//using formula
	}
	
}
int main(){
	int a;//declaring a variable
	cout<<"enter the posotion"<<endl;//asking user to give input
	cin>>a;//taking input as a
	try{
		cout<<"the number at "<<a<<" posotion in Fibonacci series is: "<<fibbo(a);//displaying output
	}
	catch (const invalid_argument& e) {//catch a error and store it as refrance of e we use & for avoiding the coping of object
        // Catch any invalid input errors
        cerr << "Error: " << e.what() << endl;//display the error
    }
	}

