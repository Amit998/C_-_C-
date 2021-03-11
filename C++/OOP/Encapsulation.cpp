#include <iostream>
#include <string>

// using namespace std;

using std::string;
using std::cout;
using std::endl;

class Employee{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name=name;

    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company=company;

    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if (age >= 18)
        {
            /* code */
            Age=18;
        }else{
            Age=age;
        }
        
        

    }

    int getAge(){
        return Age;
    }


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

    Employee employee1=Employee("Amit ","Student",2);
    employee1.intro();
    employee1.getName();



}