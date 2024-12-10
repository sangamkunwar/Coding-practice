#include<iostream>
#include<string>
using namespace std;
bool iseven(int n){
	if(n%2 == 0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int a;
	cout<< "enter a number"<<endl;
	cin>> a;
	if(iseven(a)){
		cout<<"even"<<endl;
	}else{
		cout<<"odd"<<endl;
	}
}

