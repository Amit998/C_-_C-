#include <iostream>
#include <string>

// using namespace std;

using std::string;
using std::cout;
using std::endl;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void intro(){
        cout << "Name:" << Name <<endl;
        cout << "company" << Company <<endl;
       

        // cout<< name << endl;
    }
    Employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    };

};

int main(){

    int number;

    Employee employee1=Employee("Amit","Student",12);
    employee1.intro();

    // employee1.name='Amit';
    // employee1.company="Student";
    // employee1.age=25;
    // employee1.intro();


    // Employee employee2;

    // employee2.name="saiun";
    // employee2.company="amazon";
    // employee2.age=25;
    // employee2.intro();

}