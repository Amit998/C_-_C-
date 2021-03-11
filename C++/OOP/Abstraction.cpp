#include <iostream>
#include <string>

// using namespace std;

using std::string;
using std::cout;
using std::endl;


class AbstractEmployee{
    virtual void AskForEmployee()=0;
};



class Employee:AbstractEmployee{
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
    void AskForEmployee(){
       cout<<"ask for promotion "<<endl;
       if (Age >30){
           cout<<"get Promotion"<<endl;

       }else{
           cout<<"decline Promotion"<<endl;
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
    employee1.AskForEmployee();



}