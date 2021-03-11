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
    
    string Company;
    int Age;
protected:
    string Name;

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
    virtual void work(){
        cout<<Name<<" is Chceking Email,task backlog"<<endl;
    }

};

class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name,string company,int age,string language)
    :Employee(name,company,age)
    {
        FavProgrammingLanguage=language;

    }
    void work(){
        cout<<Name<<" is writing email"<<endl;
    }

    void fixBug(){
        // cout<<getName()<<" favourite language "<<FavProgrammingLanguage<<endl;
        cout<< Name <<" favourite language "<<FavProgrammingLanguage<<endl;
    }


};

class Teacher:Employee{
public:
    string subject;
    void prepareLession(){
        cout<<Name <<"is preparing "<<subject<<" Lession"<<endl;
    };
    Teacher(string name,string company,int age,string subject):Employee(name,company,age){
        subject=subject;

    }
    void work(){
        cout<<Name<<" is teaching java"<<endl;
    }
};


int main(){

    Employee employee1=Employee("Amit ","Student",2);

    // employee1.intro();
    // employee1.getName();
    // employee1.AskForEmployee();
    employee1.work();


    Developer d= Developer("Amit ","Student",2,"java");
    d.work();

    // d.fixBug();
    // d.AskForEmployee();

    Teacher t=Teacher("jack ","cool ship",35,"History");
    // t.prepareLession();
    // t.work();

    Employee *e1=&d;
    Employee* e2=&t;


    e1->work();
    e2->work();


    




}