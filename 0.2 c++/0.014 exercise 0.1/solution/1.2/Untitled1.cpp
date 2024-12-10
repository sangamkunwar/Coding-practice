#include<iostream>
#include<string>
using namespace std;
class company{
	string ComName;
	int CompEstdyy;
	int CompEstdmm;
	int CompEstddd;
	float ComIncome;
	int NumEmployee;
	float Employee_Income;
	float Tax;
	int ShareHolder;
	int Investors;
	float loan;
	float Taxpaid;
	float Taxremain;
	public:
		void getdata(){
			cout<<"enter company name"<<endl;
			cin>> this->ComName;
			cout<<"enter company established year"<<endl;
			cin>> this->CompEstdyy;
			cout<<"enter company established month"<<endl;
			cin>> this->CompEstdmm;
			cout<<"enter company established date"<<endl;
			cin>> this->CompEstddd;
			cout<<"enter company income"<<endl;
			cin>> this->ComIncome;
			cout<<"enter company number of employee"<<endl;
			cin>> this->NumEmployee;
			cout<<"enter employee income"<<endl;
			cin>> this->Employee_Income;
			cout<<"enter company tax"<<endl;
			cin>> this->Tax;
			cout<<"enter company number of share holder"<<endl;
			cin>> this->ShareHolder;
			cout<<"enter company number of investor"<<endl;
			cin>> this->Investors;
			cout<<"enter company loan"<<endl;
			cin>> this->loan;
			cout<<"enter company paid tax"<<endl;
			cin>> this->Taxpaid;
			cout<<"enter company remaining tax"<<endl;
			cin>> this->Taxremain;
		}
		void display(){
			cout<<"company name"<<endl;
			cout<< this->ComName<<endl;
			cout<<"company established year"<<endl;
			cout<< this->CompEstdyy<<endl;
			cout<<"company established month"<<endl;
			cout<< this->CompEstdmm<<endl;
			cout<<"company established date"<<endl;
			cout<< this->CompEstddd<<endl;
			cout<<"company income"<<endl;
			cout<< this->ComIncome<<endl;
			cout<<"company number of employee"<<endl;
			cout<< this->NumEmployee<<endl;
			cout<<"employee income"<<endl;
			cout<< this->Employee_Income<<endl;
			cout<<"company tax"<<endl;
			cout<< this->Tax<<endl;
			cout<<"company number of share holder"<<endl;
			cout<< this->ShareHolder<<endl;
			cout<<"company number of investor"<<endl;
			cout<< this->Investors<<endl;
			cout<<"company loan"<<endl;
			cout<< this->loan<<endl;
			cout<<"company paid tax"<<endl;
			cout<< this->Taxpaid<<endl;
			cout<<"company remaining tax"<<endl;
			cout<< this->Taxremain<<endl;
		}
};
int main(){
	company com1;
	com1.getdata();
	com1.display();
}

