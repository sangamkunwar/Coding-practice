#include<iostream>
#include<string>
using namespace std;
//The structure is a user-defined data type that is available in C++. Structures are used to combine different types of data types, just like an array is used to combine the same type of data types.
//structre is similar to objects
struct employee
{
    /* data */
    int eId; 
    char favChar; 
    float salary; 
};
//Unions are similar to structures but they provide better memory management then structures.  Unions use shared memory so only 1 variable can be used at a time
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};
//enum
 //Enums are user-defined types which consist of named constants. Enums are used to make the program more readable.
 enum Meal{ breakfast, lunch, dinner};
int main(){
 employee ram;
 ram.eId=1;
 ram.favChar='a';
 ram.salary=10000.00;
 cout<<ram.eId<<endl<<ram.favChar<<endl<<ram.salary<<endl;
 union money m1;//making union object
 m1.rice = 34;
 cout<<m1.rice;
 
    Meal m2 = lunch;

    std::cout << (m2 == dinner);  // Outputs: 0 (false)
}

